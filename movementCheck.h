#include <iostream>
#include <string>
#include "Rook.h"
#include "BasePiece.h"


class MovementCheck : public BasePiece
{
public:
	inline void movementCheck2(int piece, int field) {
		//cout << "POLE:"<<piece;
		if (field != 20) {
			cout << "\nThe field is already taken.\n";
		}
		//Piece* szachy2[8][8];
		//int szachy2[9][];
	/*	int pawn = choosenPiece;
		if (szachy2[choosenColumn][choosenRow] == Piece(1)) {
			cout << "hej!";
		}*/
		/*if (choosenPiece == pawn)
			cout << "hej!";*/

	}

};