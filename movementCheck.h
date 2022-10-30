#include <iostream>
#include <string>
#include "Rook.h"
#include "BasePiece.h"
using namespace std;

class MovementCheck : public BasePiece
{
public:
	inline void movementCheck2(int piece, int field, int column, int row, int moveC, int moveR) {
		bool diagonal = false;
		bool xaxis = false;
		if (field != 20) {
			cout << "\nThe field is already taken.\n";
			exit(123);
		}

		switch (piece) {
		case(1): //pawn
			if (moveC > column || moveR > row + 1)
			{
				cout << "Your move is out of this piece's reach.";
				exit(123);
				break;
			}
		case(2): //rook
			if (moveR > 0 && moveC > 0) {
				cout << "Your move is out of this piece's reach.";
				exit(123);
				break;
			}
			break;
		case(4): //king
			if (moveR > row + 1 || moveC > column + 1) {
				cout << "Your move is out of this piece's reach.";
				exit(123);
				break;
			}
		}
	}
};
