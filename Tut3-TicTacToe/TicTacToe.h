#pragma once
class TicTacToe
{
	private:
		char board[3][3];
public:
	void restart();
	int move();
	int print();
	int isWon();
	int draw();
	TicTacToe();
	~TicTacToe();
};

