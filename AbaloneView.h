// AbaloneView.h : interface of the CAbaloneView class
//


#pragma once


class CAbaloneView : public CView
{
protected: // create from serialization only
	CAbaloneView();
	DECLARE_DYNCREATE(CAbaloneView)

// Attributes
public:
	CAbaloneDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CAbaloneView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in AbaloneView.cpp
inline CAbaloneDoc* CAbaloneView::GetDocument() const
   { return reinterpret_cast<CAbaloneDoc*>(m_pDocument); }
#endif

