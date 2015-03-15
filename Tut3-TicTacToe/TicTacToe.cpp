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

int TicTacToe::isWon()
{
	int Mario, Luigi;

	for (int i = 0; i < 3; i++)							//rows
	{
		Mario = 0;
		Luigi = 0;

		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] = 'X')
			{
				++Mario;
			}
			else if (board[i][j] = 'O')
			{
				++Luigi;
			}
		}
		if (Mario = 3)
		{
			return 1;
		}

		else if (Luigi = 3)
		{
			return 2;
		}
			
	}
	for (int i = 0; i < 3; i++)							//columns
	{
		Mario = 0;
		Luigi = 0;

		for (int j = 0; j < 3; j++)
		{
			if (board[j][i] = 'X')
			{
				++Mario;
			}
			else if (board[j][i] = 'O')
			{
				++Luigi;
			}
		}
		if (Mario = 3)
		{
			return 1;
		}

		else if (Luigi = 3)
		{
			return 2;
		}
			
	}

	for (int i = 0; i < 3; i++)							//diagonals
	{
		Mario = 0;
		Luigi = 0;

			if (board[i][i] = 'X')						//move from top left to bottom right
			{
				++Mario;
			}
			else if (board[i][i] = 'O')
			{
				++Luigi;
			}
	
		if (Mario = 3)
		{
			return 1;
		}

		else if (Luigi = 3)
		{
			return 2;
		}

	}
	
	for (int i = 0; i < 3; i++)							//diagonals
	{
		Mario = 0;
		Luigi = 0;

		if (board[2-i][i] = 'X')						// move from bottom left to top right
		{
			++Mario;
		}
		else if (board[2-i][i] = 'O')
		{
			++Luigi;
		}

		if (Mario = 3)
		{
			return 1;
		}

		else if (Luigi = 3)
		{
			return 2;
		}

	}

}