#pragma once
#include "loginDlg.h"
#include "view.h"
#include "afxwin.h"

// mainmfc 对话框

class mainmfc : public CDialog
{
	DECLARE_DYNAMIC(mainmfc)

public:
	mainmfc(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~mainmfc();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MAINMFC };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
	afx_msg void OnCbnSelchangeCombo1();
	CComboBox ccombo;
	afx_msg void OnCbnSetfocusCombo1();
};
