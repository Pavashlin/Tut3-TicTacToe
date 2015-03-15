#pragma once
class TicTacToe
{
	private:
		char board[3][3];
		int player;
public:
	void restart();
	void move(int, int);
	void print();
	int isWon();
	int draw();
	TicTacToe();
	~TicTacToe();
};

