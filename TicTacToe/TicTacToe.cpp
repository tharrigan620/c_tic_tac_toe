//============================================================================
// Name        : CSC123.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
using namespace std;

void printBoard(char board[])
{
	cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
	cout << "-----------\n";
	cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
	cout << "-----------\n";
	cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
}
 

int main() {
// tic-tac-toe
	char board[9] = {0};

	int cell;
	bool oTurn = true;
	while (true) {
		printBoard(board);
		cout << "Enter the cell number";
		cin >> cell;
		if (cell < 0 || cell >= 9)
			break;
		if (board[cell] != 0)
			continue;

		if (oTurn)
			board[cell] = 'o';
		else
			board[cell] = 'x';
		oTurn = !oTurn;
	

	return 0;
}

}
