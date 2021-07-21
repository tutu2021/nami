// CPageOpRecord.cpp: 实现文件
//

#include "pch.h"
#include "MFC20210721.h"
#include "CPageOpRecord.h"
#include "afxdialogex.h"


// CPageOpRecord 对话框

IMPLEMENT_DYNAMIC(CPageOpRecord, CDialogEx)

CPageOpRecord::CPageOpRecord(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_OP_RECORD, pParent)
{

}

CPageOpRecord::~CPageOpRecord()
{
}

void CPageOpRecord::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPageOpRecord, CDialogEx)
END_MESSAGE_MAP()


// CPageOpRecord 消息处理程序
