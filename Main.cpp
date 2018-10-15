#include "Game.h"
#include <vector>


int main()
{
	Game test;
	int rChoice, cChoice, pieceID;
	cin >> rChoice >> cChoice >> pieceID;
	test.tablePiecePosition(rChoice, cChoice, pieceID);
	test.displayUpdatedBoard();
	system("pause");
	return 0;
}