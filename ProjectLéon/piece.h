#pragma once
typedef enum { Roi, Renne, Fou, Tour, Cavalier, Pion }classe;
class piece
{
public:
	classe classe;
	int Xpos;
	int Ypos;
	int HP = 1;
	piece();
	~piece();
};

