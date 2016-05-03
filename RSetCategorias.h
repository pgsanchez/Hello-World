#if !defined(AFX_RSETCATEGORIAS_H__BF32FAF9_21B1_4A91_88D3_0FB08292B9CE__INCLUDED_)
#define AFX_RSETCATEGORIAS_H__BF32FAF9_21B1_4A91_88D3_0FB08292B9CE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// RSetCategorias.h : header file
//
#include <afxdb.h>
/////////////////////////////////////////////////////////////////////////////
// RSetCategorias recordset

class RSetCategorias : public CRecordset
{
public:

	short GetIdCategoria();
	CString GetCategoria();
	void SetCategoria(CString cat);
	void SetIdCategoria(short id);

	RSetCategorias(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(RSetCategorias)

// Field/Param Data
	//{{AFX_FIELD(RSetCategorias, CRecordset)
	long	m_IdCategoria;
	CString	m_Categoria;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(RSetCategorias)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RSETCATEGORIAS_H__BF32FAF9_21B1_4A91_88D3_0FB08292B9CE__INCLUDED_)
