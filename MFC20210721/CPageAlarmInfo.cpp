// CPageAlarmInfo.cpp: 实现文件
//

#include "pch.h"
#include "MFC20210721.h"
#include "CPageAlarmInfo.h"
#include "afxdialogex.h"


// CPageAlarmInfo 对话框

IMPLEMENT_DYNAMIC(CPageAlarmInfo, CDialogEx)

CPageAlarmInfo::CPageAlarmInfo(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ALARM_INFO, pParent)
{

}

CPageAlarmInfo::~CPageAlarmInfo()
{
}

void CPageAlarmInfo::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPageAlarmInfo, CDialogEx)
END_MESSAGE_MAP()


// CPageAlarmInfo 消息处理程序
