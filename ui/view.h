#pragma once

#include "mainmfc.h"
// view 对话框

class view : public CDialog
{
	DECLARE_DYNAMIC(view)

public:
	view(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~view();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_VIEW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
};
