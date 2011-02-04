#ifndef __BOARD_H__
#define __BOARD_H__

class CBoard : public CObject
{
	CBall m_BallsArr[9][17];
	CPlayer m_Player[2];
	int m_nCentY;
	int m_nRadius;
	int m_nStatus;

public:
	CBoard();
	int Initialize();
	int Draw(CDC *pDC);
	int SelectBall(CDC *pDC);
	virtual ~CBoard();
};

#endif