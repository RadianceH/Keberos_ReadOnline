
// loginDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CloginDlg �Ի���
class CloginDlg : public CDialogEx
{
// ����
public:
	CloginDlg(CWnd* pParent = NULL);	// ��׼���캯��
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LOGIN_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();

	CString cs_username;
	//afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedCancel();
};
