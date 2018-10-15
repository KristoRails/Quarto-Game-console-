#include "Game.h"

Game::Game()
{
	rowChoice = columnChoice = 0;
	pieceID = -1;
}

void Game::createPieces()
{
	string color, shape, body, height;
	for (int i = 0; i < 15; i++)
	{
		cin >> color >> shape >> body >> height;
		pieces.push_back(Piece(color, shape, body, height));
	}
}

void Game::tablePiecePosition(int rowChoice, int columnChoice, int pieceID)
{
	//player choice
	this->rowChoice = rowChoice;
	this->columnChoice = columnChoice;

	//piece is choosen by other player
	this->pieceID = pieceID;

	theBoard.board[rowChoice][columnChoice] = pieceID;
}

void Game::displayUpdatedBoard()
{
	cout << theBoard;
}
