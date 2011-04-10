
// UserDemoDlg.h : 头文件
//
#include "..\ChartCtrlDll\ChartCtrl.h" //包含类声明头文件
#pragma comment( lib,"ChartCtrlDll.lib")


#pragma once
#include "afxwin.h"


// CUserDemoDlg 对话框
class CUserDemoDlg : public CDialogEx
{
// 构造
public:
	CUserDemoDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_USERDEMO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	//CChartCtrl m_ChartCtrl;
	//CWnd m_ChartCtrl;
	//CButton m_ChartCtrl;
	//CChartCtrl kkl;
	CChartCtrl m_chartCtrl;
};
