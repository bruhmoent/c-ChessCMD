#include <iostream>
#include <string>
#include "Rook.h"

using namespace std;


enum Piece
{

	pawn = 1,
	rook = 2, 
	queen = 3,
	king = 4,
	bishop = 5,
	horse = 6,
	null = 7,
	pawnB = 8,
	rookB = 9,
	queenB = 10,
	kingB = 11,
	bishopB = 12,
	horseB = 13,
	none = 20

};

string pieceToString(int n)
{
	string s("   ");
	switch (n)
	{
	case 1: { s = "P__"; } break;
	case 2: { s = "R__"; } break;
	case 3: { s = "Q__"; } break;
	case 4: { s = "K__"; } break;
	case 5: { s = "B__"; } break;
	case 6: { s = "H__"; } break;
	case 7: { s = "?__"; } break;
	case 8: { s = "P_B"; } break;
	case 9: { s = "R_B"; } break;
	case 10: { s = "Q_B"; } break;
	case 11: { s = "K_B"; } break;
	case 12: { s = "B_B"; } break;
	case 13: { s = "H_B"; } break;
	}

	return s;
}

int main(int argc, char** argv) {
	//a
	int wybor, pole;
	int pawn = 1;
	int rook = 2;
	int queen = 3;
	int king = 4;
	int bishop = 5;
	int horse = 6;
	int null = 7;
	int pawnB = 8;
	int rookB = 9;
	int queenB = 10;
	int kingB = 11;
	int bishopB = 12;
	int horseB = 13;
	int polearr[8];

	Piece szachy2[8][8] = {
	{Piece(rook),Piece(pawn),Piece(none),Piece(none),Piece(none),Piece(none), Piece(pawnB), Piece(rookB)},
	{Piece(horse),Piece(pawn),Piece(none),Piece(none),Piece(none),Piece(none), Piece(pawnB), Piece(horseB)},
	{Piece(bishop),Piece(pawn),Piece(none),Piece(none),Piece(none),Piece(none),Piece(pawnB), Piece(bishopB)},
	{Piece(queen),Piece(pawn),Piece(none),Piece(none),Piece(none),Piece(none), Piece(pawnB), Piece(queenB)},
	{Piece(king),Piece(pawn),Piece(none),Piece(none),Piece(none),Piece(none), Piece(pawnB), Piece(kingB)},
	{Piece(bishop),Piece(pawn),Piece(none),Piece(none),Piece(none),Piece(none), Piece(pawnB), Piece(bishopB)},
	{Piece(horse),Piece(pawn),Piece(none),Piece(none),Piece(none),Piece(none), Piece(pawnB), Piece(horseB)},
	{Piece(rook),Piece(pawn),Piece(none),Piece(none),Piece(none),Piece(none), Piece(pawnB), Piece(rookB)} };

	int szachy[8][8] = {
	{rook,pawn,null,null,null,null, pawnB, rookB},
	{horse,pawn,null,null,null,null, pawnB, horseB},
	{bishop,pawn,null,null,null,null, pawnB, bishopB},
	{queen,pawn,null,null,null,null, pawnB, queenB},
	{king,pawn,null,null,null,null, pawnB, kingB},
	{bishop,pawn,null,null,null,null, pawnB, bishopB},
	{horse,pawn,null,null,null,null, pawnB, horseB},
	{rook,pawn,null,null,null,null, pawnB, rookB} };

	int a[8] = { rook,pawn,null,null,null,null, pawnB, rookB };
	int b[8] = { horse,pawn,null,null,null,null, pawnB, horseB };
	int c[8] = { bishop,pawn,null,null,null,null, pawnB, bishopB };
	int d[8] = { queen,pawn,null,null,null,null, pawnB, queenB };
	int e[8] = { king,pawn,null,null,null,null, pawnB, kingB };
	int f[8] = { bishop,pawn,null,null,null,null, pawnB, bishopB };
	int g[8] = { horse,pawn,null,null,null,null, pawnB, horseB };
	int h[8] = { rook,pawn,null,null,null,null, pawnB, rookB };

	Rook* p = new Rook();
	cout << p.Name();

	for (int i = 0; i <= 7; i++) {
		for (int j = 0; j <= 7; j++) {
			cout << "_____";

		}
		cout << "\n";
		for (int j = 0; j <= 7; j++) {
			cout << " |" << pieceToString(szachy2[j][i]);

		}
		cout << "\n";
	}


	char ah;

	int choosenRow = 0;
	int choosenColumn = 0;
	cout << "\nRow:";
	cin >> choosenRow;

	cout << "\Column:";
	cin >> choosenColumn;
	cout << "Choosen piece: " << pieceToString(szachy2[choosenColumn][choosenRow]);
	cin >> choosenColumn;


	return 0;
}

