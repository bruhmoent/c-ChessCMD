#include <iostream>
#include <string>
#include "Rook.h"
#include "BasePiece.h"
using namespace std;

class MovementCheck : public BasePiece
{
public:
	inline void movementCheck2(int piece, int field, int column, int row, int moveC, int moveR) {
		//cout << "POLE:"<<piece;
	//	cout << "\nx: . \n" << column;
		//cout << "\ny: . \n" << row;
		//static bool correctMove = true;
		if (field != 20) {
			cout << "\nThe field is already taken.\n";
		}
		switch (piece) {
		case(1):
			if (moveC > column || moveR > row+1)
			{
				cout << "Your move is out of this piece's reach.";
				exit(123);
				break;
			}
			break;

		}
		
	}
};
