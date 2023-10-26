#include "BoxAlgo.h"

#include <vector>
#include <iostream>
using namespace std;


void Print_Array(vector<vector<int>> arr, int col, int row) {
	for (int x = 0; x < row; x++) {
		for (int y = 0; y < col; y++) {
			cout << arr[x][y] << " ";
		}
		cout << endl;
	}
	return;
}

void Box_2DAlgo(int col, int row) {
	if (col == 0 || row == 0) {
		cout << "Zero Bound Detected Exiting";
		return;
	}
	vector<vector<int>> Box(row, vector<int>(col, 0));
	Box[0][0] = 1;

	for (int x = 0; x < row; x++) {
		for (int y = 0; y < col; y++) {
			if ((x + 1) != row) {
				Box[x + 1][y] += Box[x][y];
			}if ((y + 1) != col) {
				Box[x][y + 1] += Box[x][y];
			}
		}
	}

	Print_Array(Box, col, row);
	return;
}
