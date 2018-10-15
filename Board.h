#include <iostream>
#include <string>

using namespace std;

class Board
{
private:
	static const int size = 4;
public: 
	int** board;
public:
	//Constructor
	Board();

	//get function
	static const int getSize();

	//operator overloading
	friend ostream& operator<<(ostream& os, const Board& obj);
};