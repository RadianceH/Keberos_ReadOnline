// view.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "login.h"
#include "view.h"
#include "afxdialogex.h"

// view �Ի���

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


// view ��Ϣ�������


void view::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	mainmfc jumpmfc;
	CDialog::OnCancel();
	//�رյ�ǰҳ��
	jumpmfc.DoModal();
}


void view::OnBnClickedOk()
{

	//��ȫ�ֱ��� string bookcontent��Ϊ����
	string test = ccc.content;
	CString cstr(test.c_str());
	SetDlgItemText(IDC_EDIT1, TEXT(cstr));
	
	//AfxMessageBox(aname);         ȫ�ֱ���aname�洢��һҳѡ�е��鼮��
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void view::OnBnClickedButton2()
{
	ccc.NextPage();
	
		string test = ccc.content;
		CString cstr(test.c_str());
		SetDlgItemText(IDC_EDIT1, TEXT(cstr));
	

	

	//SetDlgItemText(IDC_EDIT1, TEXT(choosename));

	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void view::OnBnClickedButton1()
{
	ccc.PrePage();

	string test = ccc.content;
	CString cstr(test.c_str());
	SetDlgItemText(IDC_EDIT1, TEXT(cstr));
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
