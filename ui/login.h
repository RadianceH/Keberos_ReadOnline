
// login.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once
#include "resource.h"		// 主符号
#include "mainmfc.h"
#include "Client.h"
#include <string>
using namespace std;

extern CString choosename;			//全局变量，在mainmfc中的下拉菜单中存储选择的书名
extern string bookcontent;         //全局变量，在view中接收到server端的content存储，并显示在editor上
extern Client ccc;
#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif


// CloginApp: 
// 有关此类的实现，请参阅 login.cpp
//

class CloginApp : public CWinApp
{
public:
	CloginApp();
// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern CloginApp theApp;
