
// MFC20210721Dlg.h: 头文件
//

#pragma once


#include "CPageManualPro.h"
#include "CPageAutoPro.h"
#include "CPageDataCur.h"
#include "CPageAlarmInfo.h"
#include "CPageOpRecord.h"

// CMFC20210721Dlg 对话框
class CMFC20210721Dlg : public CDialogEx
{
// 构造
public:
	CMFC20210721Dlg(CWnd* pParent = nullptr);	// 标准构造函数
	CPageManualPro m_page_manual_pro;
	CPageAutoPro m_page_auto_pro;
	CPageDataCur m_page_data_cur;
	CPageAlarmInfo m_page_alarm_info;
	CPageOpRecord m_page_op_record;

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC20210721_DIALOG };
#endif

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
	CTabCtrl m_MainTab;
//	CButton m_b_test;
//	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
