// RSetCategorias.cpp : implementation file
//

#include "stdafx.h"
#include "MisCuentas.h"
#include "RSetCategorias.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// RSetCategorias

IMPLEMENT_DYNAMIC(RSetCategorias, CRecordset)

RSetCategorias::RSetCategorias(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(RSetCategorias)
	m_IdCategoria = 0;
	m_Categoria = _T("");
	m_nFields = 2;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString RSetCategorias::GetDefaultConnect()
{
	return _T("ODBC;DSN=MS Access Database");
}

CString RSetCategorias::GetDefaultSQL()
{
	return _T("[Categorias]");
}

void RSetCategorias::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(RSetCategorias)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[IdCategoria]"), m_IdCategoria);
	RFX_Text(pFX, _T("[Categoria]"), m_Categoria);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// RSetCategorias diagnostics

#ifdef _DEBUG
void RSetCategorias::AssertValid() const
{
	CRecordset::AssertValid();
}

void RSetCategorias::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

short RSetCategorias::GetIdCategoria()
{
	return m_IdCategoria;
}

CString RSetCategorias::GetCategoria()
{
	return m_Categoria;
}

void RSetCategorias::SetCategoria(CString cat)
{
	m_Categoria = cat;
}

void RSetCategorias::SetIdCategoria(short id)
{
	m_IdCategoria = id;
}