#pragma once
#include "Player.h"
class Board
{
private:
	int** grid;
	int size;

public:
	static int row;
	static int col;

	static int roow;
	static int cool;

	static Player player_01;
	static Player player_02;

	Board();
	Board(const Board&);
	void setter(int** board, int row, int col, int player_number);
	void assign();
	void generate();
	void displaY();
	int **getter();
	int size_getter();
	//~Board();
};

