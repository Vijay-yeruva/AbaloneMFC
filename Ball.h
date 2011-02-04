
#ifndef __BALL_H__
#define __BALL_H__
#include "AbaloneDefs.h"

class CBall : public CObject
{
	int m_nCentX;
	int m_nCentY;
	int m_nRadius;
	int m_nStatus;
	ABPOS m_structPosition;
	COLORREF m_wColor;

public:
	CBall();
	int SetStatus(int nStatus);
	int Draw(CDC *pDC);
	int Highlight(CDC *pDC, BOOL bHighlight);
	void SetPosition(char chPos1, int nPos2);
	virtual ~CBall();
};

#endif