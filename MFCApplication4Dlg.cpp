
// MFCApplication4Dlg.cpp : ���� ����
//

#include "stdafx.h"
#include "MFCApplication4.h"
#include "MFCApplication4Dlg.h"
#include "afxdialogex.h"
#include <iostream>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CString OutValue[100];
int nCount = 0;
CString nSign;
CString debugMsg;
int aFlag = 0;

// ���� ���α׷� ������ ���Ǵ� CAboutDlg ��ȭ �����Դϴ�.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

// �����Դϴ�.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplication4Dlg ��ȭ ����



CMFCApplication4Dlg::CMFCApplication4Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFCAPPLICATION4_DIALOG, pParent)
	, m_EditA(_T(""))
	, m_IntToStr(_T(""))
	, m_EditPre(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_Output = 0;
	m_EditB = _T("");
}

void CMFCApplication4Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Text(pDX, IDC_EDIT1, m_EditNum);
	DDX_Text(pDX, IDC_EDIT1, m_EditA);
	DDX_Text(pDX, IDC_EDIT2, m_EditPre);
}

BEGIN_MESSAGE_MAP(CMFCApplication4Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTT_1, &CMFCApplication4Dlg::OnBnClickedButt1)
	ON_BN_CLICKED(IDC_BUTT_2, &CMFCApplication4Dlg::OnBnClickedButt2)
	ON_BN_CLICKED(IDC_BUTT_3, &CMFCApplication4Dlg::OnBnClickedButt3)
	ON_BN_CLICKED(IDC_BUTT_4, &CMFCApplication4Dlg::OnBnClickedButt4)
	ON_BN_CLICKED(IDC_BUTT_5, &CMFCApplication4Dlg::OnBnClickedButt5)
	ON_BN_CLICKED(IDC_BUTT_6, &CMFCApplication4Dlg::OnBnClickedButt6)
	ON_BN_CLICKED(IDC_BUTT_7, &CMFCApplication4Dlg::OnBnClickedButt7)
	ON_BN_CLICKED(IDC_BUTT_8, &CMFCApplication4Dlg::OnBnClickedButt8)
	ON_BN_CLICKED(IDC_BUTT_9, &CMFCApplication4Dlg::OnBnClickedButt9)
	ON_BN_CLICKED(IDC_BUTT_0, &CMFCApplication4Dlg::OnBnClickedButt0)
	ON_BN_CLICKED(IDC_BUTT_CLEAR, &CMFCApplication4Dlg::OnBnClickedButtClear)
	ON_BN_CLICKED(IDC_BUTT_PLUS, &CMFCApplication4Dlg::OnBnClickedButtPlus)
	ON_BN_CLICKED(IDC_BUTT_MINUS, &CMFCApplication4Dlg::OnBnClickedButtMinus)
	ON_BN_CLICKED(IDC_BUTT_MULTI, &CMFCApplication4Dlg::OnBnClickedButtMulti)
	ON_BN_CLICKED(IDC_BUTT_DIVDE, &CMFCApplication4Dlg::OnBnClickedButtDivde)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCApplication4Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTT_CALC, &CMFCApplication4Dlg::OnBnClickedButtCalc)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()


// CMFCApplication4Dlg �޽��� ó����

BOOL CMFCApplication4Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// �ý��� �޴��� "����..." �޴� �׸��� �߰��մϴ�.

	// IDM_ABOUTBOX�� �ý��� ��� ������ �־�� �մϴ�.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
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

	// �� ��ȭ ������ �������� �����մϴ�.  ���� ���α׷��� �� â�� ��ȭ ���ڰ� �ƴ� ��쿡��
	//  �����ӿ�ũ�� �� �۾��� �ڵ����� �����մϴ�.
	SetIcon(m_hIcon, TRUE);			// ū �������� �����մϴ�.
	SetIcon(m_hIcon, FALSE);		// ���� �������� �����մϴ�.

	// TODO: ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
}

void CMFCApplication4Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// ��ȭ ���ڿ� �ּ�ȭ ���߸� �߰��� ��� �������� �׸�����
//  �Ʒ� �ڵ尡 �ʿ��մϴ�.  ����/�� ���� ����ϴ� MFC ���� ���α׷��� ��쿡��
//  �����ӿ�ũ���� �� �۾��� �ڵ����� �����մϴ�.

void CMFCApplication4Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // �׸��⸦ ���� ����̽� ���ؽ�Ʈ�Դϴ�.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Ŭ���̾�Ʈ �簢������ �������� ����� ����ϴ�.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// �������� �׸��ϴ�.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ����ڰ� �ּ�ȭ�� â�� ���� ���ȿ� Ŀ���� ǥ�õǵ��� �ý��ۿ���
//  �� �Լ��� ȣ���մϴ�.
HCURSOR CMFCApplication4Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CMFCApplication4Dlg::OnBnClickedButt1()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_Output = m_Output * 10 + 1;
	m_IntToStr.Format(_T("%d"), m_Output);
	m_EditA = m_IntToStr;
	UpdateData(false);
}
void CMFCApplication4Dlg::OnBnClickedButt2()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_Output = m_Output * 10 + 2;
	m_IntToStr.Format(_T("%d"), m_Output);
	m_EditA = m_IntToStr;
	UpdateData(false);
}
void CMFCApplication4Dlg::OnBnClickedButt3()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_Output = m_Output * 10 + 3;
	m_IntToStr.Format(_T("%d"), m_Output);
	m_EditA = m_IntToStr;
	UpdateData(false);
}
void CMFCApplication4Dlg::OnBnClickedButt4()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_Output = m_Output * 10 + 4;
	m_IntToStr.Format(_T("%d"), m_Output);
	m_EditA = m_IntToStr;
	UpdateData(false);
}
void CMFCApplication4Dlg::OnBnClickedButt5()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_Output = m_Output * 10 + 5;
	m_IntToStr.Format(_T("%d"), m_Output);
	m_EditA = m_IntToStr;
	UpdateData(false);
}
void CMFCApplication4Dlg::OnBnClickedButt6()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_Output = m_Output * 10 + 6;
	m_IntToStr.Format(_T("%d"), m_Output);
	m_EditA = m_IntToStr;
	UpdateData(false);
}
void CMFCApplication4Dlg::OnBnClickedButt7()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_Output = m_Output * 10 + 7;
	m_IntToStr.Format(_T("%d"), m_Output);
	m_EditA = m_IntToStr;
	UpdateData(false);
}
void CMFCApplication4Dlg::OnBnClickedButt8()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_Output = m_Output * 10 + 8;
	m_IntToStr.Format(_T("%d"), m_Output);
	m_EditA = m_IntToStr;
	UpdateData(false);
}
void CMFCApplication4Dlg::OnBnClickedButt9()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_Output = m_Output * 10 + 9;
	m_IntToStr.Format(_T("%d"), m_Output);
	m_EditA = m_IntToStr;
	UpdateData(false);
}
void CMFCApplication4Dlg::OnBnClickedButt0()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_Output = m_Output * 10 + 0;
	m_IntToStr.Format(_T("%d"), m_Output);
	m_EditA = m_IntToStr;
	UpdateData(false);
}

void CMFCApplication4Dlg::OnBnClickedButtClear()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_EditA = "";
	m_EditPre = "";
	m_Output = 0;
	UpdateData(false);
	aFlag = 0;
}

CString Calculation(CString a, CString b, CString si) {
	int aa = _ttoi(a);
	int bb = _ttoi(b);
	int result = 0;

	if(si==43)
		result = aa + bb;
	else if(si==45)
		result = aa - bb;
	else if(si==42)
		result = aa*bb;
	else if(si==47)
		result = aa/bb;

	CString res;
	res.Format(_T("%d"), result);
	return res;
}


void CMFCApplication4Dlg::OnBnClickedButtPlus()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.

	// �÷������� ��ɱ��� �����Ұ� 0~9 �� int ������ m_O����Ǿ�����
	UpdateData(true);
	if (nSign == "")
		nSign = '+';
	if (m_EditPre == "" || aFlag == 1) {
		m_EditPre = m_EditA + nSign;
		nSign = '+';
		if (aFlag == 1)
			m_EditPre = m_EditA + nSign;
	}
	else {
		m_EditPre = Calculation(m_EditPre, m_EditA, nSign) + '+';
		nSign = '+';
	}
	m_EditA = "";
	m_Output = 0;
	aFlag = 0;
	UpdateData(false);
}


void CMFCApplication4Dlg::OnBnClickedButtMinus()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData(true);
	if (nSign == "")
		nSign = '-';
	if (m_EditPre == "" || aFlag == 1) {
		m_EditPre = m_EditA + nSign;
		nSign = '-';
		if (aFlag == 1)
			m_EditPre = m_EditA + nSign;
	}
	else {
		m_EditPre = Calculation(m_EditPre, m_EditA, nSign) + '-';
		nSign = '-';
	}
	m_EditA = "";
	m_Output = 0;
	aFlag = 0;
	UpdateData(false);
}


void CMFCApplication4Dlg::OnBnClickedButtMulti()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData(true);
	if (nSign == "")
		nSign = '*';
	if (m_EditPre == "" || aFlag == 1) {
		m_EditPre = m_EditA + nSign;
		nSign = '*';
		if (aFlag == 1)
			m_EditPre = m_EditA + nSign;
	}
	else {
		m_EditPre = Calculation(m_EditPre, m_EditA, nSign) + '*';
		nSign = '*';
	}
	m_EditA = "";
	m_Output = 0;
	aFlag = 0;
	UpdateData(false);
}


void CMFCApplication4Dlg::OnBnClickedButtDivde()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData(true);
	if(nSign=="")
		nSign = '/';
	if (m_EditA == '0') {
		MessageBox(_T("0���� ������ �����ϴ�"), _T("alert"), NULL);
	}
	else {
		if (m_EditPre == "" || aFlag == 1) {
			m_EditPre = m_EditA + nSign;
			nSign = '/';
			if(aFlag==1)
				m_EditPre = m_EditA + nSign;
		}
		else {
			m_EditPre = Calculation(m_EditPre, m_EditA, nSign) + '/';
			nSign = '/';
		}
	}
	m_EditA = "";
	m_Output = 0;
	aFlag = 0;
	UpdateData(false);
}


void CMFCApplication4Dlg::OnBnClickedButton3()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.

}


void CMFCApplication4Dlg::OnBnClickedButtCalc()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData(true);
	if (m_EditA == "")
		MessageBox(_T("���ڸ� �Է����ּ���"), _T("alert"), NULL);
	else {
		if (m_EditA == '0' && nSign == '/') {
			MessageBox(_T("0���� ������ �����ϴ�"), _T("alert"), NULL);
		}
		else {
			if (aFlag == 0) {
				m_EditB = m_EditA;
				m_EditPre = m_EditPre + m_EditA + '=';
				m_EditA = Calculation(m_EditPre, m_EditA, nSign);
				m_Output = 0;

				debugMsg.Format(_T("m_EditPre : %s\n"), m_EditPre);
				OutputDebugString(debugMsg);
				debugMsg.Format(_T("m_EditA : %s\n"), m_EditA);
				OutputDebugString(debugMsg);
				aFlag = 1;
			}
			else {
				m_EditPre = m_EditA + nSign + m_EditB + '=';
				m_EditA = Calculation(m_EditA, m_EditB, nSign);
				m_Output = 0;
			}
		}
		UpdateData(false);
	}
}



void CMFCApplication4Dlg::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	switch (nChar)
	{
	case VK_NUMPAD0:
		OnBnClickedButt0();
		break;
	case VK_NUMPAD1:
		OnBnClickedButt1();
		break;
	case VK_NUMPAD2:
		OnBnClickedButt2();
		break;
	case VK_NUMPAD3:
		OnBnClickedButt3();
		break;
	case VK_NUMPAD4:
		OnBnClickedButt4();
		break;
	case VK_NUMPAD5:
		OnBnClickedButt5();
		break;
	case VK_NUMPAD6:
		OnBnClickedButt6();
		break;
	case VK_NUMPAD7:
		OnBnClickedButt7();
		break;
	case VK_NUMPAD8:
		OnBnClickedButt8();
		break;
	case VK_NUMPAD9:
		OnBnClickedButt9();
		break;
	case VK_ADD:
		OnBnClickedButtPlus();
		break;
	case VK_SUBTRACT:
		OnBnClickedButtMinus();
		break;
	case VK_MULTIPLY:
		OnBnClickedButtMulti();
		break;
	case VK_DIVIDE:
		OnBnClickedButtDivde();
		break;
	case VK_RETURN:
		OnBnClickedButtCalc();
		break;
	case VK_DELETE:
		OnBnClickedButtClear();
		break;
	default:
		break;
	}

	CDialogEx::OnKeyDown(nChar, nRepCnt, nFlags);
}


BOOL CMFCApplication4Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	if (pMsg->message == WM_KEYDOWN)
	{
		OnKeyDown((UINT)pMsg->wParam, 1, (UINT)pMsg->lParam);
		return TRUE;
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}
