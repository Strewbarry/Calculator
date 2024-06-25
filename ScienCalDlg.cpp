// ScienCalDlg.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication4.h"
#include "ScienCalDlg.h"
#include "afxdialogex.h"


// CScienCalDlg 대화 상자입니다.

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
END_MESSAGE_MAP()



void CScienCalDlg::OnBnClickedButt0()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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

	if (si == 43)
		result = aa + bb;
	else if (si == 45)
		result = aa - bb;
	else if (si == 42)
		result = aa * bb;
	else if (si == 47)
		result = aa / bb;

	CString res;
	res.Format(_T("%.2f"), result);
	return res;
}

void CScienCalDlg::OnBnClickedButtPlus()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
		m_EditPre = Calculation2(m_EditPre, m_EditA, nSign) + '+';
		nSign = '+';
	}
	m_EditA = "";
	m_Output = 0;
	m_Output2 = 0;
	aFlag = 0;
	pointFlag = 0;
	UpdateData(false);
}


void CScienCalDlg::OnBnClickedButtMinus()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
		m_EditPre = Calculation2(m_EditPre, m_EditA, nSign) + '-';
		nSign = '-';
	}
	m_EditA = "";
	m_Output = 0;
	m_Output2 = 0;
	aFlag = 0;
	pointFlag = 0;
	UpdateData(false);
}


void CScienCalDlg::OnBnClickedButtMulti()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
		m_EditPre = Calculation2(m_EditPre, m_EditA, nSign) + '*';
		nSign = '*';
	}
	m_EditA = "";
	m_Output = 0;
	m_Output2 = 0;
	aFlag = 0;
	pointFlag = 0;
	UpdateData(false);
}


void CScienCalDlg::OnBnClickedButtDivide()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(true);
	if (nSign == "")
		nSign = '/';
	if (m_EditA == '0') {
		MessageBox(_T("0으로 나눌수 없습니다"), _T("alert"), NULL);
	}
	else {
		if (m_EditPre == "" || aFlag == 1) {
			m_EditPre = m_EditA + nSign;
			nSign = '/';
			if (aFlag == 1)
				m_EditPre = m_EditA + nSign;
		}
		else {
			m_EditPre = Calculation2(m_EditPre, m_EditA, nSign) + '/';
			nSign = '/';
		}
	}
	m_EditA = "";
	m_Output = 0;
	m_Output2 = 0;
	aFlag = 0;
	pointFlag = 0;
	UpdateData(false);
}


void CScienCalDlg::OnBnClickedButtCalc()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(true);
	if (m_EditA == "")
		MessageBox(_T("숫자를 입력해주세요"), _T("alert"), NULL);
	else {
		if (m_EditA == '0' && nSign == '/') {
			MessageBox(_T("0으로 나눌수 없습니다"), _T("alert"), NULL);
		}
		else {
			if (aFlag == 0) {
				m_EditB = m_EditA;
				m_EditPre = m_EditPre + m_EditA + '=';
				m_EditA = Calculation2(m_EditPre, m_EditA, nSign);
				m_Output = 0;
				aFlag = 1;
			}
			else {
				m_EditPre = m_EditA + nSign + m_EditB + '=';
				m_EditA = Calculation2(m_EditA, m_EditB, nSign);
				m_Output = 0;
			}
			pointFlag = 0;
		}
		UpdateData(false);
	}
}


void CScienCalDlg::OnBnClickedButtDot()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	pointFlag = 1;
}
