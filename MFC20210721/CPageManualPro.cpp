// CPageManualPro.cpp: 实现文件
//

#include "pch.h"
#include "MFC20210721.h"
#include "CPageManualPro.h"
#include "afxdialogex.h"


// CPageManualPro 对话框

IMPLEMENT_DYNAMIC(CPageManualPro, CDialogEx)

CPageManualPro::CPageManualPro(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MANUAL_PROCESS, pParent)
{

}

CPageManualPro::~CPageManualPro()
{
}

void CPageManualPro::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPageManualPro, CDialogEx)
END_MESSAGE_MAP()


// CPageManualPro 消息处理程序
