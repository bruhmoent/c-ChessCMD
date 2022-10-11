#pragma once
#include <string>
#include <iostream>
#include "BasePiece.h"
using namespace std;
class Rook : public BasePiece{
  int pozycja[8][8];

  public:
	string Name() {
		return "Wieza";
	}

	void GdzieJestem() {
		for (int i = 0; i <= 7; i++) {
			for (int j = 0; j <= 7; j++) {
				if (pozycja[j][i] == 1) {
					cout << "Wieza jest:" << j<<":"<<i;
					break;
				}
			}
		}

	}

	void MoveTo(int row, int column) {
		for (int i = 0; i <= 7; i++) {
			for (int j = 0; j <= 7; j++) {
				pozycja[row][column] = 0;
			}
		}
		pozycja[column][row] = 1;
	}

	void Setup(int row, int column) {
		for (int i = 0; i <= 7; i++) {
			for (int j = 0; j <= 7; j++) {
				pozycja[row][column] = 0;
			}
		}

		pozycja[row][column] = 1;
	}
};


