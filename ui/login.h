
// login.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once
#include "resource.h"		// ������
#include "mainmfc.h"
#include "Client.h"
#include <string>
using namespace std;

extern CString choosename;			//ȫ�ֱ�������mainmfc�е������˵��д洢ѡ�������
extern string bookcontent;         //ȫ�ֱ�������view�н��յ�server�˵�content�洢������ʾ��editor��
extern Client ccc;
#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif


// CloginApp: 
// �йش����ʵ�֣������ login.cpp
//

class CloginApp : public CWinApp
{
public:
	CloginApp();
// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CloginApp theApp;
