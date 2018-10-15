#include "Pieces.h"

Piece::Piece(string color, string shape, string body, string height) :
	color(color), shape(shape), body(body), height(height)
{
	//empty
}

const string Piece::getColor() const
{
	return this->color;
}

const string Piece::getShape() const
{
	return this->shape;
}

const string Piece::getBody() const
{
	return this->body;
}

const string Piece::getHeight() const
{
	return this->height;
}

ostream & operator<<(ostream & os, const Piece & obj)
{
	os << obj.getColor() << ' ' << obj.getShape() << ' ' << obj.getBody() << ' ' << obj.getHeight();
	return os;
}
