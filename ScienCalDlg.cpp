// ScienCalDlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication4.h"
#include "ScienCalDlg.h"
#include "afxdialogex.h"

//#include "MFCApplication4Dlg.h"
//CMFCApplication4Dlg ddlg; //��ȯ���� ���� �ذ��ؾߴ�


// CScienCalDlg ��ȭ �����Դϴ�.

CString debugMsg2; // ����� ��¿� ctr

IMPLEMENT_DYNAMIC(CScienCalDlg, CDialog)

CScienCalDlg::CScienCalDlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOG_SCIENTIFIC, pParent)
	, m_EditPre(_T(""))
	, m_EditA(_T(""))
	, m_Output(0)
	, m_IntToStr(_T(""))
	, aFlag(0)
	, pointFlag(false)
	, m_Output2(0)
	, nSign(_T(""))
	, m_EditB(_T(""))
	, squareFlag(false)
	, m_ListBox(_T(""))
	, historyShow(false)
	, m_EditBuff(_T(""))
{

}

CScienCalDlg::~CScienCalDlg()
{
}

void CScienCalDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_EDIT1, m_EditPre);
	DDX_Text(pDX, IDC_EDIT2, m_EditA);
	DDX_Control(pDX, IDC_LIST1, m_ListCtrl);
	DDX_LBString(pDX, IDC_LIST1, m_ListBox);
}


BEGIN_MESSAGE_MAP(CScienCalDlg, CDialog)
	ON_BN_CLICKED(IDC_BUTT_0, &CScienCalDlg::OnBnClickedButt0)
	ON_BN_CLICKED(IDC_BUTT_1, &CScienCalDlg::OnBnClickedButt1)
	ON_BN_CLICKED(IDC_BUTT_2, &CScienCalDlg::OnBnClickedButt2)
	ON_BN_CLICKED(IDC_BUTT_3, &CScienCalDlg::OnBnClickedButt3)
	ON_BN_CLICKED(IDC_BUTT_4, &CScienCalDlg::OnBnClickedButt4)
	ON_BN_CLICKED(IDC_BUTT_5, &CScienCalDlg::OnBnClickedButt5)
	ON_BN_CLICKED(IDC_BUTT_6, &CScienCalDlg::OnBnClickedButt6)
	ON_BN_CLICKED(IDC_BUTT_7, &CScienCalDlg::OnBnClickedButt7)
	ON_BN_CLICKED(IDC_BUTT_8, &CScienCalDlg::OnBnClickedButt8)
	ON_BN_CLICKED(IDC_BUTT_9, &CScienCalDlg::OnBnClickedButt9)
	ON_BN_CLICKED(IDC_BUTT_CLEAR, &CScienCalDlg::OnBnClickedButtClear)
	ON_BN_CLICKED(IDC_BUTT_PLUS, &CScienCalDlg::OnBnClickedButtPlus)
	ON_BN_CLICKED(IDC_BUTT_MINUS, &CScienCalDlg::OnBnClickedButtMinus)
	ON_BN_CLICKED(IDC_BUTT_MULTI, &CScienCalDlg::OnBnClickedButtMulti)
	ON_BN_CLICKED(IDC_BUTT_DIVIDE, &CScienCalDlg::OnBnClickedButtDivide)
	ON_BN_CLICKED(IDC_BUTT_CALC, &CScienCalDlg::OnBnClickedButtCalc)
	ON_BN_CLICKED(IDC_BUTT_DOT, &CScienCalDlg::OnBnClickedButtDot)
	ON_WM_KEYDOWN()
	ON_BN_CLICKED(IDC_BUTT_POW, &CScienCalDlg::OnBnClickedButtPow)
	ON_BN_CLICKED(IDC_BUTT_SQRT, &CScienCalDlg::OnBnClickedButtSqrt)
	ON_COMMAND(ID_32771, &CScienCalDlg::On32771)
	ON_COMMAND(ID_32772, &CScienCalDlg::On32772)
	ON_BN_CLICKED(IDC_BUTT_CLEARALL, &CScienCalDlg::OnBnClickedButtClearall)
	ON_LBN_DBLCLK(IDC_LIST1, &CScienCalDlg::OnDblclkList1)
END_MESSAGE_MAP()



void CScienCalDlg::OnBnClickedButt0()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if (pointFlag == 0) {
		m_Output = m_Output * 10 + 0;
		m_IntToStr.Format(_T("%.2f"), m_Output);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
	else {
		m_Output2 = m_Output2 * 10 + 0;
		m_IntToStr.Format(_T("%d.%d"), (int)m_Output,m_Output2);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
}


void CScienCalDlg::OnBnClickedButt1()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if (pointFlag == 0) {
		m_Output = m_Output * 10 + 1;
		m_IntToStr.Format(_T("%.2f"), m_Output);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
	else {
		m_Output2 = m_Output2 * 10 + 1;
		m_IntToStr.Format(_T("%d.%d"), (int)m_Output, m_Output2);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
}


void CScienCalDlg::OnBnClickedButt2()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if (pointFlag == 0) {
		m_Output = m_Output * 10 + 2;
		m_IntToStr.Format(_T("%.2f"), m_Output);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
	else {
		m_Output2 = m_Output2 * 10 + 2;
		m_IntToStr.Format(_T("%d.%d"), (int)m_Output, m_Output2);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
}


void CScienCalDlg::OnBnClickedButt3()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if (pointFlag == 0) {
		m_Output = m_Output * 10 + 3;
		m_IntToStr.Format(_T("%.2f"), m_Output);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
	else {
		m_Output2 = m_Output2 * 10 + 3;
		m_IntToStr.Format(_T("%d.%d"), (int)m_Output, m_Output2);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
}


void CScienCalDlg::OnBnClickedButt4()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if (pointFlag == 0) {
		m_Output = m_Output * 10 + 4;
		m_IntToStr.Format(_T("%.2f"), m_Output);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
	else {
		m_Output2 = m_Output2 * 10 + 4;
		m_IntToStr.Format(_T("%d.%d"), (int)m_Output, m_Output2);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
}


void CScienCalDlg::OnBnClickedButt5()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if (pointFlag == 0) {
		m_Output = m_Output * 10 + 5;
		m_IntToStr.Format(_T("%.2f"), m_Output);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
	else {
		m_Output2 = m_Output2 * 10 + 5;
		m_IntToStr.Format(_T("%d.%d"), (int)m_Output, m_Output2);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
}


void CScienCalDlg::OnBnClickedButt6()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if (pointFlag == 0) {
		m_Output = m_Output * 10 + 6;
		m_IntToStr.Format(_T("%.2f"), m_Output);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
	else {
		m_Output2 = m_Output2 * 10 + 6;
		m_IntToStr.Format(_T("%d.%d"), (int)m_Output, m_Output2);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
}


void CScienCalDlg::OnBnClickedButt7()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if (pointFlag == 0) {
		m_Output = m_Output * 10 + 7;
		m_IntToStr.Format(_T("%.2f"), m_Output);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
	else {
		m_Output2 = m_Output2 * 10 + 7;
		m_IntToStr.Format(_T("%d.%d"), (int)m_Output, m_Output2);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
}


void CScienCalDlg::OnBnClickedButt8()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if (pointFlag == 0) {
		m_Output = m_Output * 10 + 8;
		m_IntToStr.Format(_T("%.2f"), m_Output);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
	else {
		m_Output2 = m_Output2 * 10 + 8;
		m_IntToStr.Format(_T("%d.%d"), (int)m_Output, m_Output2);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
}


void CScienCalDlg::OnBnClickedButt9()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if (pointFlag == 0) {
		m_Output = m_Output * 10 + 9;
		m_IntToStr.Format(_T("%.2f"), m_Output);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
	else {
		m_Output2 = m_Output2 * 10 + 9;
		m_IntToStr.Format(_T("%d.%d"), (int)m_Output, m_Output2);
		m_EditA = m_IntToStr;
		UpdateData(false);
	}
}


void CScienCalDlg::OnBnClickedButtClear()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_EditBuff = "";
	m_EditA = "";
	m_EditPre = "";
	m_Output = 0;
	m_Output2 = 0;
	UpdateData(false);
	pointFlag = 0;
	aFlag = 0;
}

CString Calculation2(CString a, CString b, CString si) {
	double aa = _ttof(a);
	double bb = _ttof(b);
	double result = 0;

	if (si[0] == 43)
		result = aa + bb;
	else if (si[0] == 45)
		result = aa - bb;
	else if (si[0] == 42)
		result = aa * bb;
	else if (si[0] == 47)
		result = aa / bb;
	else if (si[0] == 94) {  // 94 == ^
		result = aa * aa;
	}
	else if (si[0] == 's') {
		result = sqrt(aa);
	}

	CString res;
	res.Format(_T("%.2f"), result);
	return res;
}
void RemoveLastChar(CString& str) {
	int len = str.GetLength();
	if (len > 0) {
		str = str.Left(len - 1);
	}
}
void CScienCalDlg::OnBnClickedButtPlus()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData(true);
	if (nSign == "")
		nSign = '+';
	if (nSign != '+' && m_EditA == "") {
		RemoveLastChar(m_EditPre);
	}
	if (m_EditPre == "") {
		m_EditPre = m_EditA + nSign;
	}
	else if (aFlag == 1) {
		nSign = '+';
		m_EditPre = m_EditA + nSign;
	}
	else {
		m_EditBuff = Calculation2(m_EditBuff, m_EditA, nSign);
		m_EditPre = m_EditPre + m_EditA + '+';
	}

	nSign = '+';
	m_EditA = "";
	m_Output = 0;
	m_Output2 = 0;
	aFlag = 0;
	pointFlag = 0;
	squareFlag = 0;
	UpdateData(false);
}


void CScienCalDlg::OnBnClickedButtMinus()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData(true);
	if (nSign == "")
		nSign = '-';
	if (nSign != '-' && m_EditA == "") {
		RemoveLastChar(m_EditPre);
	}
	if (m_EditPre == "") {
		m_EditPre = m_EditA + nSign;
	}
	else if (aFlag == 1) {
		nSign = '-';
		m_EditPre = m_EditA + nSign;
	}
	else {
		m_EditBuff = Calculation2(m_EditBuff, m_EditA, nSign);
		m_EditPre = m_EditPre + m_EditA + '-';
	}

	nSign = '-';
	m_EditA = "";
	m_Output = 0;
	m_Output2 = 0;
	aFlag = 0;
	pointFlag = 0;
	squareFlag = 0;
	UpdateData(false);
}


void CScienCalDlg::OnBnClickedButtMulti()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData(true);
	if (nSign == "")
		nSign = '*';
	if (nSign != '*' && m_EditA == "")
		RemoveLastChar(m_EditPre);
	if (m_EditPre == "") {
		m_EditPre = m_EditA + nSign;
	}
	else if (aFlag == 1) {
		nSign = '*';
		m_EditPre = m_EditA + nSign;
	}
	else {
		m_EditBuff = Calculation2(m_EditBuff, m_EditA, nSign);
		m_EditPre = m_EditPre + m_EditA + '*';
	}

	nSign = '*';
	m_EditA = "";
	m_Output = 0;
	m_Output2 = 0;
	aFlag = 0;
	pointFlag = 0;
	squareFlag = 0;
	UpdateData(false);
}


void CScienCalDlg::OnBnClickedButtDivide()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData(true);
	if (nSign == "")
		nSign = '/';
	if (nSign != '/' && m_EditA=="")
		RemoveLastChar(m_EditPre);
	if (m_EditA == "0.00") {
		MessageBox(_T("0���� ������ �����ϴ�"), _T("alert"), NULL);
	}
	else {
		if (m_EditPre == "") {
			m_EditPre = m_EditA + nSign;
		}
		else if (aFlag == 1) {
			nSign = '/';
			m_EditPre = m_EditA + nSign;
		}
		else {
			m_EditBuff = Calculation2(m_EditBuff, m_EditA, nSign);
			m_EditPre = m_EditPre + m_EditA + '/';
		}
	}
	nSign = '/';
	m_EditA = "";
	m_Output = 0;
	m_Output2 = 0;
	aFlag = 0;
	pointFlag = 0;
	squareFlag = 0;
	UpdateData(false);
}


void CScienCalDlg::OnBnClickedButtCalc()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData(true);
	if (m_EditA == "" && squareFlag == 0) {
		MessageBox(_T("���ڸ� �Է����ּ���"), _T("alert"), NULL);
	}
	else if (squareFlag == 1) {
		if (aFlag == 0) {
			m_EditB = m_EditA;
			m_EditA = Calculation2(m_EditPre, m_EditA, nSign);
			m_EditPre = m_EditPre + '=';
			aFlag = 1;
		}
		else {
			m_EditPre = m_EditA + nSign + '=';
			m_EditA = Calculation2(m_EditPre, m_EditA, nSign);
		}
		m_Output = 0;
		m_ListCtrl.AddString(m_EditPre+m_EditA);
	}
	else {
		if (m_EditA == "0.00" && nSign == '/') {
			MessageBox(_T("0���� ������ �����ϴ�"), _T("alert"), NULL);
		}
		else {
			if (aFlag == 0) {
				m_EditB = m_EditA;
				m_EditPre = m_EditPre + m_EditA + '=';
				m_EditA = Calculation2(m_EditPre, m_EditA, nSign);
				aFlag = 1;
			}
			else {
				m_EditPre = m_EditA + nSign + m_EditB + '=';
				m_EditA = Calculation2(m_EditA, m_EditB, nSign);
			}
			m_Output = 0;
			pointFlag = 0;
			m_ListCtrl.AddString(m_EditPre + m_EditA);
		}
	}
	UpdateData(false);
}


void CScienCalDlg::OnBnClickedButtDot()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	pointFlag = 1;
}

// Ű�Է� ����
BOOL CScienCalDlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	if (pMsg->message == WM_KEYDOWN)
	{
		OnKeyDown((UINT)pMsg->wParam, 1, (UINT)pMsg->lParam);
		return TRUE;
	}
	return CDialog::PreTranslateMessage(pMsg);
}

// Ű�Է½� �Լ� ����
void CScienCalDlg::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
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
		OnBnClickedButtDivide();
		break;
	case VK_RETURN:
		OnBnClickedButtCalc();
		break;
	case VK_DELETE:
		OnBnClickedButtClear();
		break;
	case VK_DECIMAL:
		OnBnClickedButtDot();
		break;
	default:
		break;
	}

	CDialog::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CScienCalDlg::OnBnClickedButtPow()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData(true);
	if (nSign == "")
		nSign = "^";
	if (m_EditPre == "" || aFlag == 1) {
		m_EditPre = m_EditA + nSign;
		nSign = "^";
		if (aFlag == 1)
			m_EditPre = m_EditA + nSign;
	}
	else {
		m_EditPre = Calculation2(m_EditPre, m_EditA, nSign) + _T("^2");
		nSign = "^";
	}
	squareFlag = 1;
	m_EditA = "";
	m_Output = 0;
	m_Output2 = 0;
	aFlag = 0;
	pointFlag = 0;
	UpdateData(false);
}


void CScienCalDlg::OnBnClickedButtSqrt()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData(true);
	if (nSign == "")
		nSign = "sqrt";
	if (m_EditPre == "" || aFlag == 1) {
		m_EditPre = m_EditA + nSign;
		nSign = "sqrt";
		if (aFlag == 1)
			m_EditPre = m_EditA + nSign;
	}
	else {
		m_EditPre = Calculation2(m_EditPre, m_EditA, nSign) + _T("sqrt");
		nSign = "sqrt";
	}
	squareFlag = 1;
	m_EditA = "";
	m_Output = 0;
	m_Output2 = 0;
	aFlag = 0;
	pointFlag = 0;
	UpdateData(false);
}


void CScienCalDlg::On32771()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	CMenu* pMenu = GetMenu();
	if (pMenu != nullptr) {
		CMenu* pSubMenu = pMenu->GetSubMenu(0);
		if (pSubMenu != nullptr) {
			if (historyShow == 0) {
				m_ListCtrl.ShowWindow(SW_SHOW);
				historyShow = 1;
				pSubMenu->ModifyMenu(ID_32771, MF_BYCOMMAND | MF_STRING, ID_32771, _T("�־ȴ�"));
			}
			else {
				m_ListCtrl.ShowWindow(SW_HIDE);
				historyShow = 0;
				pSubMenu->ModifyMenu(ID_32771, MF_BYCOMMAND | MF_STRING, ID_32771, _T("�����丮 �����"));
			}
			DrawMenuBar();
		}
	}
}


void CScienCalDlg::On32772()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	OnOK();
}


void CScienCalDlg::OnBnClickedButtClearall()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_ListCtrl.ResetContent();
}


void CScienCalDlg::OnDblclkList1()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}
