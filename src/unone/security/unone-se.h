/****************************************************************************
**
** Copyright (C) 2019 BlackINT3
** Contact: https://github.com/BlackINT3/none
**
** GNU Lesser General Public License Usage (LGPL)
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
****************************************************************************/
#pragma once
#include <Windows.h>
#include <string>

namespace UNONE {

#ifdef _UNICODE
#define SeEnablePrivilege SeEnablePrivilegeW
#define SeDisablePrivilege SeDisablePrivilegeW
#else
#define SeEnablePrivilege SeEnablePrivilegeA
#define SeDisablePrivilege SeDisablePrivilegeA
#endif // _UNICODE

UNONE_API bool SeEnablePrivilegeA(__in const char* priv_name, __in DWORD priv_number = 0);
UNONE_API bool SeEnablePrivilegeW(__in const wchar_t* priv_name, __in DWORD priv_number = 0);
UNONE_API bool SeDisablePrivilegeA(__in const char* priv_name, __in DWORD priv_number = 0);
UNONE_API bool SeDisablePrivilegeW(__in const wchar_t* priv_name, __in DWORD priv_number = 0);
UNONE_API bool SeEnableDebugPrivilege(__in bool natived = false);
UNONE_API bool SeDisableDebugPrivilege(__in bool natived = false);

} // namespace UNONE