#include <iostream>
#include "Board.h"
#include "mygraphics.h"
#include "Player.h"
#include "myconsole.h"
using namespace std;
int main()
{
	maximized();
	int size = 0;
	while ((size % 2 == 0) )
	{
		cout << "ENTER GAME SIZE : ";
		cin >> size;
	}

	int row = size - 1, col = 0, row2 = 0, col2 = size - 1;
	int player_number = 0, player_number2 = 0;
	while (player_number != 1 && player_number != 2)
	{
		cout << "ENTER YOUR PLAYER NUMBER TO START WITH : ";
		cin >> player_number;
	}

	if (player_number == 1)
	{
		player_number2 = 2;
	}
	else
		player_number2 = 1;

		Board initialize;
		initialize.assign();
		
		//Player player2(initialize.getter(), row2, col2, player_number2);
		//Player player(initialize.getter(), row, col, player_number);

		
		int temp = size;
		int check = 0;
	while (true)
	{
		initialize.displaY();
		cin >> check;
		//player.movement_1(size, temp, initialize.getter());
		size = initialize.size_getter();
		ClearScreen();
		PlaceCursor(0, 0);
		drawboard(initialize.getter(), size);
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
		cin >> check;
		//player2.movement_2(size, temp, initialize.getter());
		size = initialize.size_getter();
		PlaceCursor(0, 0);
		ClearScreen();
		drawboard(initialize.getter(), size);
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	}







	return 0;
}