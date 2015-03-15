// Tut3-TicTacToe.cpp : Defines the entry point for the console application.
//

#include "TicTacToe.h"
#include "stdafx.h"
#include<iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 1;
	int command = 0;
	int row, column, result;

	TicTacToe game;
	cout << "Game has started" << endl;
	cout << "Player 1 begins" << endl;
	
	
	while (x > 0)
	{
		cout << '\n' << endl;
		cout << "Enter command: " << endl;
		cout << "1. Reset" << endl;
		cout << "2. Move" << endl;
		cout << "3. Print" << endl;
		cout << "4. IsWon" << endl;
		cout << '\n' << endl;
		
		cin >> command;

		if (command == 1)
		{
			game.restart();
			cout << '\n' << endl;
		}

		else if (command == 2)
		{
			cout << "Enter row" << endl;
			cin >> row;
			cout << "Enter column" << endl;
			cin >> column;

			game.move(row, column);
		}
		else if (command == 3)
		{
			game.print();
			cout << '\n' << endl;
		}

		else if(command == 4)
		{
			result = game.isWon();
			if (result == 1)
			{
				cout << "Player 1 wins!"<<endl;
			}

			else if (result == 2)
			{
				cout << "Player 2 wins!" << endl;
			}
			cout << '\n' << endl;
		}

	}
	
	return 0;
}

