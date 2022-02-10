#include <iostream>
#include "Board.h"
#include "windows.h"
#include <ctime>
using namespace std;

int Board::row = 0;
int Board::col = 0;

int Board::roow = 0;
int Board::cool = 0;

Player 
Player Board :: player_02;

Board::Board()
{
	size = 5;
	grid = new int *[size];
	for (int i = 0; i < size; i++)
	{
		grid[i] = new int [size];
	}

	for (int i = 0; i < size;i++)
	{
		for (int j = 0; j < size; j++)
		{
			grid[i][j] = 0;
		}
	}

}


/*Board::~Board()
{
	
	for (int i = 0; i < size; i++)
	{
		delete[] grid[i];
	}
	delete[] grid;
}*/


void Board::generate()
{

}


void Board::displaY()
{
	for (int i = 0; i < size ; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}
}

void Board::assign()
{   //First 2 row + 3(1/2) 20
	int i = 0,j = 0;
	for ( i = 0; i < size/2; i++)
	{
		for ( j = 0; j < size; j++)
		{
			grid[i][j] = 20;
		}
	}


	srand(time(0));
	//First 2 row + 3(1 / 2) 20
	for ( j = 0; j < size/2; j++)
	{
		grid[(size/2)][j] = 20;
	}

	// Center 15
	grid[size / 2][(size / 2)] = 15;

	//Last 2 row + 3(1 / 2) 25
	for (j = j + 1; j < size; j++)
	{
		grid[(size / 2)][j] = 25;
	}

	//Last 2 row + 3(1 / 2) 25
	for (i = (size/2) + 1; i < size ; i++)
	{
		for (j = 0; j < size; j++)
		{
			grid[i][j] = 25;
		}
	}

	//First 2 row + 3(1 / 2) 31/30 --> Gold 30  -->Silver 31
	for (i = 0; i < size / 2; i++)
	{
		for (j = 0; j < (size/2); j++)
		{
			grid[i][rand()%size] = (rand()% 2)+30;
		}
	}

	//First 2 row + 3(1 / 2) 31/30 --> Gold 30  -->Silver 31
	grid[(size / 2)][rand() % size/2] = (rand() % 2) + 30;

	//Last 2 row + 3(1 / 2) 31/30 --> Gold 30  -->Silver 31
	grid[(size / 2)][(rand() % ((size / 2)) + ((size/2)+1))] = (rand() % 2) + 30;
	grid[size / 2][(size / 2)] = 15;

	//Last 2 row + 3(1 / 2) 31/30 --> Gold 30  -->Silver 31
	for (i = (size / 2) + 1; i < size; i++)
	{
		for (j = 0; j < size/2; j++)
		{
			grid[i][rand() % size] = (rand() % 2) + 30;
		}
	}
}

Board::Board(const Board& board)
{
	size = board.size;
	grid = new int*[size];
	for (int i = 0; i < size; i++)
	{
		grid[i] = new int[size];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			grid[i][j] = board.grid[i][j];
		}
	}
}

int **Board::getter()
{
	return grid;
}

int Board::size_getter()
{
	return size;
}

void Board::setter(int**board, int row, int col, int player_number)
{
	board[row][col] = player_number;
}