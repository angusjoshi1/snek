#pragma once
#include<ctime>
#include<queue>
#include "ticker.h"
#include "point.h"
class Snake;
class Food;
class SnakeBlock;

class Game
{
public: 
	//X_DIMENSION, Y_DIMENSION define the size of the game window in 10 pixel blocks
	static const int X_DIMENSION;
	static const int Y_DIMENSION;
	bool Initialise();
	void Update(bool& needRedraw);
	void Draw(HDC hdc, PAINTSTRUCT* ps);
	bool ChangingDirection();
	Point NextDirection();
	void ClearMoves();
	bool m_UpPressed;
	bool m_DownPressed;
	bool m_LeftPressed;
	bool m_RightPressed;
	~Game();

public:
	Ticker m_Ticker;
	Food* m_Food;
	Snake* m_Snake;
	std::queue<Point> m_Moves;
};

extern Game g_Game;