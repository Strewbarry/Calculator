#pragma once

// CScienCalDlg ��ȭ �����Դϴ�.
#include "MFCApplication4.h"


class CScienCalDlg : public CDialog
{
	DECLARE_DYNAMIC(CScienCalDlg)

public:
	CScienCalDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CScienCalDlg();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SCIENTIFIC };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	
	afx_msg void OnBnClickedButt0();
	CString m_EditPre;
	CString m_EditA;
	double m_Output;
	CString m_IntToStr;
	afx_msg void OnBnClickedButt1();
	afx_msg void OnBnClickedButt2();
	afx_msg void OnBnClickedButt3();
	afx_msg void OnBnClickedButt4();
	afx_msg void OnBnClickedButt5();
	afx_msg void OnBnClickedButt6();
	afx_msg void OnBnClickedButt7();
	afx_msg void OnBnClickedButt8();
	afx_msg void OnBnClickedButt9();
	afx_msg void OnBnClickedButtClear();
	afx_msg void OnBnClickedButtPlus();
	afx_msg void OnBnClickedButtMinus();
	afx_msg void OnBnClickedButtMulti();
	afx_msg void OnBnClickedButtDivide();
	afx_msg void OnBnClickedButtCalc();
	int aFlag;
	afx_msg void OnBnClickedButtDot();
	bool pointFlag;
	int m_Output2;
	CString nSign;
	CString m_EditB;
};
