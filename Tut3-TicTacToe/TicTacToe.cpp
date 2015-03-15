#include "TicTacToe.h"
#include <iostream>

using namespace std;

TicTacToe::TicTacToe()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = ' ';
		}
	}
	player = 1;
}


TicTacToe::~TicTacToe()
{
}

void TicTacToe::restart()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void TicTacToe::move(int r, int c)
{
	int check;
	
	if (r>2 || c > 2 || r < 0 || c < 0)
	{
		cout<<"Illegal move"<<endl;											
	}

	else if (board[r][c] != ' ')
	{
		cout << "Illegal move"<<endl;  								
	}

	else
	{
		if (player = 1)
		{
			board[r][c] = 'X';
			player = 2;
		}

		else
		{
			board[r][c] = 'O';
			player = 1;
		}
	}
}

void TicTacToe::print()
{
	cout << board[0][0] << " " << board[0][1] << " " << board[0][2] << endl;
	cout << board[1][0] << " " << board[1][1] << " " << board[1][2] << endl;
	cout << board[2][0] << " " << board[2][1] << " " << board[2][2] << endl;
}

