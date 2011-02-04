// AbaloneDoc.cpp : implementation of the CAbaloneDoc class
//

#include "stdafx.h"
#include "Abalone.h"

#include "AbaloneDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAbaloneDoc

IMPLEMENT_DYNCREATE(CAbaloneDoc, CDocument)

BEGIN_MESSAGE_MAP(CAbaloneDoc, CDocument)
END_MESSAGE_MAP()


// CAbaloneDoc construction/destruction

CAbaloneDoc::CAbaloneDoc()
{
	// TODO: add one-time construction code here

}

CAbaloneDoc::~CAbaloneDoc()
{
}

BOOL CAbaloneDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CAbaloneDoc serialization

void CAbaloneDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}


// CAbaloneDoc diagnostics

#ifdef _DEBUG
void CAbaloneDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CAbaloneDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CAbaloneDoc commands
