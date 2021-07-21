#pragma once


// CPageAutoPro 对话框

class CPageAutoPro : public CDialogEx
{
	DECLARE_DYNAMIC(CPageAutoPro)

public:
	CPageAutoPro(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CPageAutoPro();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_AUTO_PROCESS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
