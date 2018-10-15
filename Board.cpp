#include "Board.h"

Board::Board()
{
	//allocate memory
	board = new int*[size];
	for (int i = 0; i < size; i++)
		board[i] = new int[size];
	
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			board[i][j] = 0;
}

const int Board::getSize()
{
	return size;
}

ostream & operator<<(ostream & os, const Board & obj)
{
	for (int i = 0; i <obj.size; i++)
	{
		for (int j = 0; j < obj.size; j++)
			os << obj.board[i][j] << ' ';
		os << endl;
	}
	return os;
}
