#pragma once
#include "Board.h"
class Player
{
private :
	int player_number;
public:
	int rows;
	int cols;
	Player();
	Player(int** board, int row, int col, int player_number);
	void movement_1(int size, int temp,int **board);
	void movement_2(int size, int temp,int **board);
	void set_player_number(int player_number);
	int get_player_number();
	~Player();
};

