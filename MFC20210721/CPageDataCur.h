#pragma once


// CPageDataCur 对话框

class CPageDataCur : public CDialogEx
{
	DECLARE_DYNAMIC(CPageDataCur)

public:
	CPageDataCur(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CPageDataCur();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DATA_CURVE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
