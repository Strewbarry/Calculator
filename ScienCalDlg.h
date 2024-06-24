#pragma once

// CScienCalDlg 대화 상자입니다.
#include "MFCApplication4.h"


class CScienCalDlg : public CDialog
{
	DECLARE_DYNAMIC(CScienCalDlg)

public:
	CScienCalDlg(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CScienCalDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SCIENTIFIC };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	
};
