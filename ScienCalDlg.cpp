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

{

}

CScienCalDlg::~CScienCalDlg()
{
}

void CScienCalDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

}


BEGIN_MESSAGE_MAP(CScienCalDlg, CDialog)

END_MESSAGE_MAP()

