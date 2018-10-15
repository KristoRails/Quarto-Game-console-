#include "Board.h"
#include "Pieces.h"
#include <iostream>
#include <vector>

class Game
{
private:
	Board theBoard;
	vector<Piece>pieces;

	//player choice
	int rowChoice;
	int columnChoice;
	int pieceID;
public:
	//default constructor
	Game();

	//create pieces
	void createPieces();
	//put piece on table (by player)
	void tablePiecePosition(int rowChoice, int columnChoice, int pieceID);


	void displayUpdatedBoard();
};