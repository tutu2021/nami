// CPageAutoPro.cpp: 实现文件
//

#include "pch.h"
#include "MFC20210721.h"
#include "CPageAutoPro.h"
#include "afxdialogex.h"


// CPageAutoPro 对话框

IMPLEMENT_DYNAMIC(CPageAutoPro, CDialogEx)

CPageAutoPro::CPageAutoPro(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_AUTO_PROCESS, pParent)
{

}

CPageAutoPro::~CPageAutoPro()
{
}

void CPageAutoPro::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPageAutoPro, CDialogEx)
END_MESSAGE_MAP()


// CPageAutoPro 消息处理程序
