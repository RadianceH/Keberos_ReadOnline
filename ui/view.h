#pragma once

#include "mainmfc.h"
// view �Ի���

class view : public CDialog
{
	DECLARE_DYNAMIC(view)

public:
	view(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~view();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_VIEW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
};
