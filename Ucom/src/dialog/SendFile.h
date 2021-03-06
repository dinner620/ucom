#pragma once

#include "UBase.h"

// CSnedFile Dialog
class CSendFile : public CDialog
{
	DECLARE_DYNAMIC(CSendFile)

public:
	CSendFile::CSendFile(CWnd* pParent, UcomBase** mbase);
	virtual ~CSendFile();

// Dialog data
	enum { IDD = IDD_FILE_LOAD };

private:
	CString strFilePath;
	int UnblockSend(const char*pBuff, UINT len);
	void AppendLog(CString str);

	// 模态对话框，只能在打开通信端口情况下弹出所以不需要判断是否打开端口
	UcomBase** uuBase;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnload();
	afx_msg void OnBnClickedBtnsendfile();
	virtual BOOL OnInitDialog();
	virtual void OnOK();
};
