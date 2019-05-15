// view.cpp : 实现文件
//

#include "stdafx.h"
#include "login.h"
#include "view.h"
#include "afxdialogex.h"

// view 对话框

IMPLEMENT_DYNAMIC(view, CDialog)

view::view(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_VIEW, pParent)
{

}

view::~view()
{
}

void view::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(view, CDialog)
	ON_BN_CLICKED(IDCANCEL, &view::OnBnClickedCancel)
	ON_BN_CLICKED(IDOK, &view::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON2, &view::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &view::OnBnClickedButton1)
END_MESSAGE_MAP()


// view 消息处理程序


void view::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	mainmfc jumpmfc;
	CDialog::OnCancel();
	//关闭当前页面
	jumpmfc.DoModal();
}


void view::OnBnClickedOk()
{

	//用全局变量 string bookcontent作为载体
	string test = ccc.content;
	CString cstr(test.c_str());
	SetDlgItemText(IDC_EDIT1, TEXT(cstr));
	
	//AfxMessageBox(aname);         全局变量aname存储上一页选中的书籍名
	// TODO: 在此添加控件通知处理程序代码
}


void view::OnBnClickedButton2()
{
	ccc.NextPage();
	
		string test = ccc.content;
		CString cstr(test.c_str());
		SetDlgItemText(IDC_EDIT1, TEXT(cstr));
	

	

	//SetDlgItemText(IDC_EDIT1, TEXT(choosename));

	// TODO: 在此添加控件通知处理程序代码
}


void view::OnBnClickedButton1()
{
	ccc.PrePage();

	string test = ccc.content;
	CString cstr(test.c_str());
	SetDlgItemText(IDC_EDIT1, TEXT(cstr));
	// TODO: 在此添加控件通知处理程序代码
}
