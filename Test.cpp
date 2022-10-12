#include <iostream>
#include <string>
#include "Rook.h"
#include "BasePiece.h"
#include "movementCheck.h"

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
	case 1: { s = "P  "; } break;
	case 2: { s = "R  "; } break;
	case 3: { s = "Q  "; } break;
	case 4: { s = "K  "; } break;
	case 5: { s = "B  "; } break;
	case 6: { s = "H  "; } break;
	case 7: { s = "?__"; } break;
	case 8: { s = "P B"; } break;
	case 9: { s = "R B"; } break;
	case 10: { s = "Q B"; } break;
	case 11: { s = "K B"; } break;
	case 12: { s = "B B"; } break;
	case 13: { s = "H B"; } break;
	case 20: { s = " N "; } break;
	default:
		s = "Invalid or empty";
	}

	return s;
}

int main(int argc, char** argv) {
	//sprintf("%c%c%c\n", 0xE2, 0x99, 0xA0);
//	char q[] = "King: \xE2\x99\x94.\n";
	//std::wcout << L"wstr [" <<  "King: \xE2\x99\x94.\n" << L']' << std::endl;

//	cout << q;
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
	cout << "\n";
	Rook* pb = new Rook();
	pb->Setup(0, 0);
	cout << (*pb).Name();
	(*pb).GdzieJestem();

	cout << "\n";


	Rook* pb2 = new Rook();
	pb2->Setup(0, 7);
	cout << (*pb2).Name();
	(*pb2).GdzieJestem();

	cout << "\n";

	//(*pb).MoveTo(1,2);

//	(*pb).GdzieJestem();

	//(*pb).Run();
	cout << "\n";

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
	int moveRow = 0;
	int moveColumn = 0;
	int choosenPiece = 0;
	cout << "\nRow:";
	cin >> choosenRow;
	cout << "\nColumn:\n";
	cin >> choosenColumn;
	//	choosenRow = 1;
		//choosenColumn = 3;
	cout << "\ntab:\n" << szachy2[choosenColumn][choosenRow];

	cout << "\nChoosen piece: " << pieceToString(szachy2[choosenColumn][choosenRow]);
	if (szachy2[choosenColumn][choosenRow]==Piece(none))
	{
		cout << "\nMusisz wybrac pionek\n";
		return 0;
	}
	choosenPiece = szachy2[choosenColumn][choosenRow];
	cout << "\n" << choosenPiece << "\n";
	//cin >> choosenColumn;
	cout << "\nWykonaj ruch w Row:\n ";
	cin >> moveRow;
	cout << "\nWykonaj ruch w Column:\n ";
	cin >> moveColumn;
	cout << "\n";

	int choosenField = szachy2[moveColumn][moveRow];
	//cout << "\n\n\nDEBUG: " << choosenField << "\n\n\n---: ";
	MovementCheck* hi = new MovementCheck();
	hi->movementCheck2(choosenPiece, choosenField, choosenColumn, choosenRow, moveColumn, moveRow);
	(*pb).MoveTo(moveRow, moveColumn);
	//correctMove* move = new correctMove();
	//if (correctMove = false) {
	//	return 0;
//	}

	cout << "\n";
	(*pb).GdzieJestem();
	cout << "\n";
	(*pb).Run();
	szachy2[moveColumn][moveRow] = Piece(choosenPiece);
	szachy2[choosenColumn][choosenRow] = Piece(none);
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

	return 0;
}

