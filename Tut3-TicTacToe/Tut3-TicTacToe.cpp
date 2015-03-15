// Tut3-TicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 1,command;

	cout << "Game has started" << endl;
	cout << "Player 1 begins" << endl;
	
	
	while (x > 0)
	{
		cout << "enter command: " << endl;
		cout << "1. Reset" << endl;
		cout << "2. Move" << endl;
		cout << "3. Print" << endl;
		cout << "4. IsWon" << endl;

		cin >> command;


	}
	
	return 0;
}

