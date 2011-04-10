// ChartCtrlDll.h : main header file for the ChartCtrlDll DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CChartCtrlDllApp
// See ChartCtrlDll.cpp for the implementation of this class
//

class CChartCtrlDllApp : public CWinApp
{
public:
	CChartCtrlDllApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
