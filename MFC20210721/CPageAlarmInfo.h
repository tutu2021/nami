﻿#pragma once


// CPageAlarmInfo 对话框

class CPageAlarmInfo : public CDialogEx
{
	DECLARE_DYNAMIC(CPageAlarmInfo)

public:
	CPageAlarmInfo(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CPageAlarmInfo();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ALARM_INFO };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
