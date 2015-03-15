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
