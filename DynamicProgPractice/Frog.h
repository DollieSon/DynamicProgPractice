#pragma once
#include <iostream>
#include <vector>
using namespace std;

int Frog_Jump(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}
	else {
		return Frog_Jump(n - 1) + Frog_Jump(n - 2);
	}
}
int Frog_Jump2(int n) {
	n++;
	vector<int> spaces(n, 0);
	spaces[0] = 1;
	for (int x = 0; x < (n); x++) {
		if (x + 1 < n) {
			spaces[x + 1] += spaces[x];
		}
		if (x + 2 < n) {
			spaces[x + 2] += spaces[x];
		}
	}
	return spaces[n - 1];
}