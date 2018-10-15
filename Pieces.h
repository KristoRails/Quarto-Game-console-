#include <iostream>
#include <string>
using namespace std;

class Piece
{
private:
	string color;
	string shape;
	string body;
	string height;

public:
	
	//Constructor - member initiliazer
	Piece(string color, string shape, string body, string height);
	
	//Get functions
	const string getColor() const;
	const string getShape() const;
	const string getBody() const;
	const string getHeight() const;

	//operator overloading
	friend ostream& operator<<(ostream& os, const Piece& obj);
};