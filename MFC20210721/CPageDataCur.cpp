// CPageDataCur.cpp: 实现文件
//

#include "pch.h"
#include "MFC20210721.h"
#include "CPageDataCur.h"
#include "afxdialogex.h"


// CPageDataCur 对话框

IMPLEMENT_DYNAMIC(CPageDataCur, CDialogEx)

CPageDataCur::CPageDataCur(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DATA_CURVE, pParent)
{

}

CPageDataCur::~CPageDataCur()
{
}

void CPageDataCur::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPageDataCur, CDialogEx)
END_MESSAGE_MAP()


// CPageDataCur 消息处理程序
