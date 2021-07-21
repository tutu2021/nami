#pragma once


// CPageManualPro 对话框

class CPageManualPro : public CDialogEx
{
	DECLARE_DYNAMIC(CPageManualPro)

public:
	CPageManualPro(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CPageManualPro();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MANUAL_PROCESS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
