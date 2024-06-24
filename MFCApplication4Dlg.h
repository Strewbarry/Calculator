
// MFCApplication4Dlg.h : 헤더 파일
//

#pragma once


// CMFCApplication4Dlg 대화 상자
class CMFCApplication4Dlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCApplication4Dlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION4_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_EditA;
	afx_msg void OnBnClickedButt1();
	afx_msg void OnBnClickedButt2();
	afx_msg void OnBnClickedButt3();
	afx_msg void OnBnClickedButt4();
	afx_msg void OnBnClickedButt5();
	afx_msg void OnBnClickedButt6();
	afx_msg void OnBnClickedButt7();
	afx_msg void OnBnClickedButt8();
	afx_msg void OnBnClickedButt9();
	afx_msg void OnBnClickedButt0();
	afx_msg void OnBnClickedButtClear();
	afx_msg void OnBnClickedButtPlus();
	afx_msg void OnBnClickedButtMinus();
	afx_msg void OnBnClickedButtMulti();
	afx_msg void OnBnClickedButtDivde();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButtCalc();
	int m_Output;
	CString m_IntToStr;
	CString m_EditPre;
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	CString m_EditB;
};
