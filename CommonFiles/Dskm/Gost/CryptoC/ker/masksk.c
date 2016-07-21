#include "CrC_User.h"
#include <stdio.h>
/*���������������������������������������������������������������������DEFINES*/
/*��������������������������������������������������������������������MASKSECC*/
int     CrypC_Mask_SecretKey_( struct RND_State *State, void  *Sec )
/*���������������������������������������������������������������������������*/
/*             ��ନ஢���� ���� ��᪨஢������ ᥪ�⭮�� ����             */
/*                            ��� ����������.                                */
/* �室�� ��ࠬ����:                                                        */
/* - ������ ���� - ���� NK*4 ���� NK*4*2-���⮢��� ���� ���� *Sec.    */
/* ��室:                                                                    */
/* - ����᪨஢���� ᥪ��� ���� ����頥� ᥪ��� ���� � ����� NK*4    */
/*   ����� ���� Sec.                                                        */
/* - ��᪠ ᥪ�⭮�� ���� ࠧ��頥��� � ��᫥���� NK*4 ����� ���� Sec.    */
/* - ������ ���� ���� १���� ��᫮����� (᫮�� ����� 32 ���) ᫮����� */
/*   �� ����� 2**32 ����� ����᪨஢������ ᥪ�⭮�� ���� � �����     */
/*   ��᪨. ����᪨஢���� ᥪ��� ���� �ᯮ������ ��楤�ࠬ� _GOSTE   */
/*   � _GOSTA.                                                               */
/*���������������������������������������������������������������������������*/
{
  DWORD *M1, TMPKey[LNK];
  int i;
extern   struct COM_State PERMDefault;
/* �맮� ��楤��� �ନ஢����  ������஢������ ���ᨢ� ����⠭����       */
/* ��� �ਯ��奬� ���� 28147-89:                                             */
CrypC__InitGost( (BYTE *)PERMDefault.Perms, PERMDefault.K_ );

/* ��砫쭮� ���������� ��᪨ ����.                   */
CrypC_FillByRandom_(State,(BYTE *)Sec+LNK*4,LNK*4);

/* ���砩�� ����.                                     */
CrypC_FillByRandom_(State,TMPKey,LNK*4);

/* �����஢���� �� ��砩��� ����.                  */
for(i=0;i<LNK/2;i++)
   {
   M1=(DWORD *)((char *)Sec+(i*8)+LNK*4);
   CrypC__GOSTE_(PERMDefault.K_,TMPKey,M1,M1);
   }

/* ��᫮���� ��������� ��᪨ ���� �� ᥪ��� ����.  */
for(i=0;i<LNK;i++)
   ((DWORD *)Sec)[i] -= ((DWORD *)Sec)[i+LNK];

return(0);
}
/*��������������������������������������������������������������������MASKSECC*/
/*������������������������������������������������������������������REMASKSECC*/
int     CrypC_ReMask_SecretKey_( struct RND_State *State, void  *Sec )
/*���������������������������������������������������������������������������*/
/*              ��������� ��᪨ ��᪨஢������ ᥪ�⭮�� ����              */
/*                            ��� ����������.                                */
/* �室�� ��ࠬ����:                                                        */
/* - ��᪨஢���� ᥪ��� ���� - NK*4*2-���⮢�� ���� ���� *Sec.         */
/* ��室:                                                                    */
/* - ����᪨஢���� ᥪ��� ���� ����頥� ᥪ��� ���� � ����� NK*4    */
/*   ����� ���� Sec.                                                        */
/* - ��᪠ ᥪ�⭮�� ���� ࠧ��頥��� � ��᫥���� NK*4 ����� ���� Sec.    */
/* - ������ ���� ���� १���� ��᫮����� (᫮�� ����� 32 ���) ᫮����� */
/*   �� ����� 2**32 ����� ����᪨஢������ ᥪ�⭮�� ���� � �����     */
/*   ��᪨. ����᪨஢���� ᥪ��� ���� �ᯮ������ ��楤�ࠬ� _GOSTE   */
/*   � _GOSTA.                                                               */
/*���������������������������������������������������������������������������*/
{
  DWORD *M1;
  int i;
  DWORD  TMPMask[LNK],TMPKey[LNK];
extern   struct COM_State PERMDefault;
/* �맮� ��楤��� �ନ஢����  ������஢������ ���ᨢ� ����⠭����       */
/* ��� �ਯ��奬� ���� 28147-89:                                             */
CrypC__InitGost( (BYTE *)PERMDefault.Perms, PERMDefault.K_ );

/* ��砫쭮� ���������� ��᪨ ����.                      */
CrypC_FillByRandom_(State,(BYTE *)TMPMask,LNK*4);

/* ���砩�� ����.                                        */
CrypC_FillByRandom_(State,TMPKey,LNK*4);

/* �����஢���� �� ��砩��� ����.                     */
for(i=0;i<LNK/2;i++)
   {
   M1=(DWORD *)((char *)TMPMask+(i*8));
   CrypC__GOSTE_(PERMDefault.K_,TMPKey,M1,M1);
   }

/* ��᫮���� ��७�������� ��᪨ ���� �� ᥪ��� ����. */
for(i=0;i<LNK;i++)
   ((DWORD *)Sec)[i] += ((DWORD *)Sec)[i+LNK]-((DWORD *)TMPMask)[i];

/* ����஢���� ����� ��᪨.                               */
memcpy((BYTE *)Sec+LNK*4,TMPMask,LNK*4);

return(0);
}
/*������������������������������������������������������������������REMASKSECC*/
/*�������������������������������������������������������������������������EOF*/
