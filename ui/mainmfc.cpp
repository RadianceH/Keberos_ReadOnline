// mainmfc.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "login.h"
#include "mainmfc.h"
#include "afxdialogex.h"

Client ccc;
CString choosename;
// mainmfc �Ի���

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


// mainmfc ��Ϣ�������


void mainmfc::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CloginDlg jumplogin;
	CDialog::OnCancel();
	//�رյ�ǰҳ��
	jumplogin.DoModal();
}


void mainmfc::OnBnClickedOk()
{

	string bookname(choosename.GetString());	//����ת����string
	if (ccc.Read())
	{
		view jumpview;
		CDialog::OnCancel();
		//�رյ�ǰҳ��
		jumpview.DoModal();
		//��ת����ҳ��

	}
	
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
	/*
	�˴�����ж������Լ���Ӧ�鼮Ŀ¼��������ݿ����
	*/
	

	//bookname��������������в���

	


}


void mainmfc::OnCbnSelchangeCombo1()
{
	
	
	CString m_sName;
	int nIndex = ccombo.GetCurSel();	//��ȡ��ǰ����
	ccombo.GetLBText(nIndex, m_sName);	//��ȡ������Ӧ���鼮����
	choosename = m_sName;
//	AfxMessageBox(m_sName);//test
										// TODO: �ڴ���ӿؼ�֪ͨ����������
}


	

	



	void mainmfc::OnCbnSetfocusCombo1()
	{
		string str1 = "Ц������";
		CString cstr1(str1.c_str());
		string str2 = "����������";
		CString cstr2(str2.c_str());
		string str3 = "ѩ�к�����";
		CString cstr3(str3.c_str());
		string str4 = "����";
		CString cstr4(str4.c_str());
		string str5 = "������";
		CString cstr5(str5.c_str());
		CString strFont[5] = { cstr1 , cstr2 , cstr3 , cstr4 , cstr5 };
		//m_cbWebs.AddString(cstr);
		for (int i = 0; i < 5; i++)
		{
			ccombo.InsertString(i, strFont[i]);
		}
		// TODO: �ڴ���ӿؼ�֪ͨ����������

	}
