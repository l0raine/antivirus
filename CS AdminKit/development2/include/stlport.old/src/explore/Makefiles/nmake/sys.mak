# Time-stamp: <03/09/28 18:59:23 ptr>
# $Id: sys.mak,v 1.2 2004/02/05 22:52:52 ptr Exp $

# shared library:
SO  = dll
# The cooool Microsoft programmers pass LIB from line below into environment var!!!!
# LIB = lib
LIBEXT = lib
EXP = exp
# executable:
EXE = .exe

# static library extention:
ARCH = lib
AR = lib.exe /nologo
AR_INS_R = 
AR_EXTR = 
AR_OUT = /OUT:$@

INSTALL = copy

INSTALL_SO = $(INSTALL)
INSTALL_A = $(INSTALL)
INSTALL_EXE = $(INSTALL)

# compiler, compiler options
!include $(RULESBASE)/$(USE_MAKE)/$(COMPILER_NAME).mak

