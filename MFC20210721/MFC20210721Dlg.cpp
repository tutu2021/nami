
// MFC20210721Dlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "MFC20210721.h"
#include "MFC20210721Dlg.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &CAboutDlg::OnTcnSelchangeTab1)
END_MESSAGE_MAP()


// CMFC20210721Dlg 对话框



CMFC20210721Dlg::CMFC20210721Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFC20210721_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFC20210721Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TAB1, m_MainTab);
	//  DDX_Control(pDX, IDC_BUTTONtest, m_b_test);
}

BEGIN_MESSAGE_MAP(CMFC20210721Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &CMFC20210721Dlg::OnTcnSelchangeTab1)
END_MESSAGE_MAP()


// CMFC20210721Dlg 消息处理程序

BOOL CMFC20210721Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}
	
	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	m_MainTab.InsertItem(0, _T("手动工艺"));
	m_MainTab.InsertItem(1, _T("自动工艺"));
	m_MainTab.InsertItem(2, _T("数据曲线"));
	m_MainTab.InsertItem(2, _T("报警信息"));
	m_MainTab.InsertItem(2, _T("操作记录"));

	m_page_manual_pro.Create(IDD_MANUAL_PROCESS, GetDlgItem(IDC_TAB1));
	m_page_manual_pro.SetParent(GetDlgItem(IDC_TAB1));
	m_page_auto_pro.Create(IDD_AUTO_PROCESS, GetDlgItem(IDC_TAB1));
	m_page_auto_pro.SetParent(GetDlgItem(IDC_TAB1));
	m_page_data_cur.Create(IDD_DATA_CURVE, GetDlgItem(IDC_TAB1));
	m_page_data_cur.SetParent(GetDlgItem(IDC_TAB1));
	m_page_alarm_info.Create(IDD_ALARM_INFO, GetDlgItem(IDC_TAB1));
	m_page_alarm_info.SetParent(GetDlgItem(IDC_TAB1));
	m_page_op_record.Create(IDD_OP_RECORD, GetDlgItem(IDC_TAB1));
	m_page_op_record.SetParent(GetDlgItem(IDC_TAB1));
	

	CRect rect;
	m_MainTab.GetClientRect(&rect);
	rect.top += 22;
	rect.left += 2;
	rect.right -= 3;
	rect.bottom -= 3;
	m_page_manual_pro.MoveWindow(&rect);
	m_page_auto_pro.MoveWindow(&rect);
	m_page_data_cur.MoveWindow(&rect);
	m_page_alarm_info.MoveWindow(&rect);
	m_page_op_record.MoveWindow(&rect);

	//m_page_manual_pro.ShowWindow(1);

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMFC20210721Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFC20210721Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFC20210721Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CAboutDlg::OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: 在此添加控件通知处理程序代码

	

	*pResult = 0;
}


void CMFC20210721Dlg::OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: 在此添加控件通知处理程序代码
	static CDialog *pDialogList[] =
	{
		&m_page_manual_pro,
		&m_page_auto_pro,
		&m_page_data_cur,
		&m_page_alarm_info,
		&m_page_op_record,
		NULL
	};

	int nCurSel = m_MainTab.GetCurSel();
	for (int i = 0; pDialogList[i];i++)
	{
		pDialogList[i]->ShowWindow(i == nCurSel);
	}

	*pResult = 0;
}
