// mainmfc.cpp : 实现文件
//

#include "stdafx.h"
#include "login.h"
#include "mainmfc.h"
#include "afxdialogex.h"

Client ccc;
CString choosename;
// mainmfc 对话框

IMPLEMENT_DYNAMIC(mainmfc, CDialog)

mainmfc::mainmfc(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_MAINMFC, pParent)
{

}

mainmfc::~mainmfc()
{
}

void mainmfc::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, ccombo);
}


BEGIN_MESSAGE_MAP(mainmfc, CDialog)
	ON_BN_CLICKED(IDCANCEL, &mainmfc::OnBnClickedCancel)
	ON_BN_CLICKED(IDOK, &mainmfc::OnBnClickedOk)
	ON_CBN_SELCHANGE(IDC_COMBO1, &mainmfc::OnCbnSelchangeCombo1)
	ON_CBN_SETFOCUS(IDC_COMBO1, &mainmfc::OnCbnSetfocusCombo1)
END_MESSAGE_MAP()


// mainmfc 消息处理程序


void mainmfc::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CloginDlg jumplogin;
	CDialog::OnCancel();
	//关闭当前页面
	jumplogin.DoModal();
}


void mainmfc::OnBnClickedOk()
{

	string bookname(choosename.GetString());	//类型转换成string
	if (ccc.Read())
	{
		view jumpview;
		CDialog::OnCancel();
		//关闭当前页面
		jumpview.DoModal();
		//跳转至主页面

	}
	
	// TODO: 在此添加控件通知处理程序代码
	
	/*
	此处添加判定条件以及对应书籍目录所需的数据库操作
	*/
	

	//bookname传输给服务器进行查找

	


}


void mainmfc::OnCbnSelchangeCombo1()
{
	
	
	CString m_sName;
	int nIndex = ccombo.GetCurSel();	//获取当前行数
	ccombo.GetLBText(nIndex, m_sName);	//获取行数对应的书籍名称
	choosename = m_sName;
//	AfxMessageBox(m_sName);//test
										// TODO: 在此添加控件通知处理程序代码
}


	

	



	void mainmfc::OnCbnSetfocusCombo1()
	{
		string str1 = "笑傲江湖";
		CString cstr1(str1.c_str());
		string str2 = "倚天屠龙记";
		CString cstr2(str2.c_str());
		string str3 = "雪中悍刀行";
		CString cstr3(str3.c_str());
		string str4 = "碧玉刀";
		CString cstr4(str4.c_str());
		string str5 = "长生剑";
		CString cstr5(str5.c_str());
		CString strFont[5] = { cstr1 , cstr2 , cstr3 , cstr4 , cstr5 };
		//m_cbWebs.AddString(cstr);
		for (int i = 0; i < 5; i++)
		{
			ccombo.InsertString(i, strFont[i]);
		}
		// TODO: 在此添加控件通知处理程序代码

	}
