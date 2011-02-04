// Abalone.h : main header file for the Abalone application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CAbaloneApp:
// See Abalone.cpp for the implementation of this class
//

class CAbaloneApp : public CWinApp
{
public:
	CAbaloneApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CAbaloneApp theApp;