#pragma once


// CPageOpRecord 对话框

class CPageOpRecord : public CDialogEx
{
	DECLARE_DYNAMIC(CPageOpRecord)

public:
	CPageOpRecord(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CPageOpRecord();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_OP_RECORD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
