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
	
};
