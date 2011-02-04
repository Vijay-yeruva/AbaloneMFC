// AbaloneView.cpp : implementation of the CAbaloneView class
//

#include "stdafx.h"
#include "Abalone.h"

#include "AbaloneDoc.h"
#include "AbaloneView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAbaloneView

IMPLEMENT_DYNCREATE(CAbaloneView, CView)

BEGIN_MESSAGE_MAP(CAbaloneView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CAbaloneView construction/destruction

CAbaloneView::CAbaloneView()
{
	// TODO: add construction code here

}

CAbaloneView::~CAbaloneView()
{
}

BOOL CAbaloneView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CAbaloneView drawing

void CAbaloneView::OnDraw(CDC* /*pDC*/)
{
	CAbaloneDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CAbaloneView printing

BOOL CAbaloneView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CAbaloneView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CAbaloneView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CAbaloneView diagnostics

#ifdef _DEBUG
void CAbaloneView::AssertValid() const
{
	CView::AssertValid();
}

void CAbaloneView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAbaloneDoc* CAbaloneView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAbaloneDoc)));
	return (CAbaloneDoc*)m_pDocument;
}
#endif //_DEBUG


// CAbaloneView message handlers
