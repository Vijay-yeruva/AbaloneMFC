#ifndef __PLAYER_H__
#define __PLAYER_H__

class CPlayer:public CObject
{
	int m_nNum;
	char m_sName[20];
	int m_nScore;
public:
	CPlayer();
	virtual ~CPlayer();
	int Init(int nNum, char sName[]);
	char* GetName();
	int GetTeamNum();
	int GetScore();
	int IncrementScore();
	void Draw(CDC* pDC, BOOL bHighlight);
};
#endif