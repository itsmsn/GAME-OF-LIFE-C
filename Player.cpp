#include "Player.h"

Player::Player()
{
}


Player::~Player()
{
}

/*void  Player ::  movement_1(int size,int temp, int **board)
{
	if (row == size - 1)
	{
		col++;
		setter(board, row, col, player_number);
		if (col == size)
			row = row - 1;
	}
	if (row == size - 2)
	{
		setter(board,row, col, player_number);
		col--;
		if (col == size)
			row = row - 1;
	}
	if (row == size / 2)
	{
		if (col > size / 2)
		{
			col = temp;
			col--;
			setter(board,row, col, player_number);
			temp = col;
		}
	}
}

void  Player::movement_2(int size, int temp,int **board)
{
	if (row == 0)
	{
		col--;
		setter(board,row, col, player_number);
		if (col == 0)
			row = row + 1;
	}

	if (row == 1)
	{
		col++;
		setter(board,row, col, player_number);
		if (col == size)
			row = row + 1;
	}

	if (row == size / 2)
	{
		if (col < (size / 2)+1)
		{
			col++;
			setter(board,row, col, player_number);
		}
	}
}
*/
int Player::get_player_number()
{
	return player_number;
}

void Player:: set_player_number(int player_number)
{
	this->player_number = player_number;
}

/*Player :: Player(int **board,int rows, int cols, int player_numbers)
{
	row = rows;
	col = cols;
	player_number = player_numbers;
	board[rows][cols] = player_number;
}*/