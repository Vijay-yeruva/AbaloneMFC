// AbaloneDoc.h : interface of the CAbaloneDoc class
//


#pragma once


class CAbaloneDoc : public CDocument
{
protected: // create from serialization only
	CAbaloneDoc();
	DECLARE_DYNCREATE(CAbaloneDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CAbaloneDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


