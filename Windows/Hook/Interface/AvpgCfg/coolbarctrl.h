#if !defined(AFX_COOLBARCTRL_H__C2726E9E_8FF0_441B_A20E_4D7055C1A1FD__INCLUDED_)
#define AFX_COOLBARCTRL_H__C2726E9E_8FF0_441B_A20E_4D7055C1A1FD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CCoolBarCtrl wrapper class

class CCoolBarCtrl : public CWnd
{
protected:
	DECLARE_DYNCREATE(CCoolBarCtrl)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xf2ea5d86, 0x92c3, 0x11d3, { 0x96, 0xb0, 0x0, 0x10, 0x4b, 0x5b, 0x66, 0xaa } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:
	short GetAppearance();
	void SetAppearance(short);
	short GetBorderStyle();
	void SetBorderStyle(short);
	BOOL GetHighlightSelectedItem();
	void SetHighlightSelectedItem(BOOL);
	BOOL GetAnimation();
	void SetAnimation(BOOL);
	BOOL GetDisplayFolders();
	void SetDisplayFolders(BOOL);
	BOOL GetSmallIconView();
	void SetSmallIconView(BOOL);

// Operations
public:
	SCODE AddFolder(long nFolderNameID, LPCTSTR pFolderName, long* pnFolderIndex);
	SCODE AddFolderItem(long nFolderIndex, long hItemIcon, long nItemNameID, LPCTSTR pItemName, long nItemID);
	SCODE InsertFolderItem(long nFolderIndex, long nItemIndex, long hItemIcon, long nItemNameID, LPCTSTR pItemName, long nItemID);
	SCODE RemoveFolder(long nFolderIndex);
	SCODE RemoveFolderItem(long nFolderIndex, long nItemIndex);
	SCODE SetFolderName(long nFolderIndex, long nFolderNameID, LPCTSTR pFolderName);
	SCODE SetFolderItemName(long nFolderIndex, long nItemIndex, long nItemNameID, LPCTSTR pItemName);
	SCODE SetFolderItemID(long nFolderIndex, long nItemIndex, long nItemID);
	SCODE ReplaceFolderItemID(long nFolderIndex, long nOldItemID, long nNewItemID);
	SCODE SetActiveFolder(long nFolderIndex, long nItemIndex);
	SCODE ChangeLocalization();
	SCODE GetActiveFolder(long* pnFolderIndex, long* pnItemIndex);
	SCODE SetSelectedFolder(long nFolderIndex);
	SCODE GetDisplayIconStatus(long* nStatus);
	SCODE GetFolderCount(long* nCount);
	SCODE GetFolderItemCount(long nFolderIndex, long* nCount);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COOLBARCTRL_H__C2726E9E_8FF0_441B_A20E_4D7055C1A1FD__INCLUDED_)
