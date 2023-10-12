#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <cstdbool>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <limits>
#include <queue>
#include <random>
#include <stack>
#include <string>
#include <tuple>
#include <vector>
using namespace std;
int dice[6][10000][6];
struct d {
	int top;
	int dicenum;
};
int calc(struct d before, int sum, int n, int t){
	int bottom = before.top;
	int dicenum = before.dicenum+1;
	int bottomnum = -1;
	for (int i = 0; i < 6; i++) {
		if (dice[t][dicenum][i] == bottom) {
			bottomnum = i;
			dice[t][dicenum][i] = -1;
			break;
		}
	}
	int top = 0;
	switch (bottomnum) {
		case 0:
			top = dice[t][dicenum][5];
			dice[t][dicenum][5] = -1;
			break;
		case 1:
			top = dice[t][dicenum][3];
			dice[t][dicenum][3] = -1;
			break;
		case 2:
			top = dice[t][dicenum][4];
			dice[t][dicenum][4] = -1;
			break;
		case 3:
			top = dice[t][dicenum][1];
			dice[t][dicenum][1] = -1;
			break;
		case 4:
			top = dice[t][dicenum][2];
			dice[t][dicenum][2] = -1;
			break;
		case 5:
			top = dice[t][dicenum][0];
			dice[t][dicenum][0] = -1;
			break;
		default:
			return -1;
			break;
	}
	sort(dice[t][dicenum], dice[t][dicenum] + 6);
	sum += dice[t][dicenum][5];
	if (dicenum == n - 1) {
		return sum;
	}
	else {
		return calc({ top, dicenum }, sum, n, t);
	}
};
int main(void)
{
#ifndef _DEBUG
	auto inputfile=freopen("input.txt", "r", stdin);
	auto outputfile=freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> dice[0][i][j];
			for (int k = 1; k < 6; k++) {
				dice[k][i][j] = dice[0][i][j];
			}
		}
	}
	int result = 0;
	for (int i = 1; i <=6; i++) {
		result = max(result, calc({ i, -1 }, 0, n, i-1));
	}
	cout << result;

#ifndef _DEBUG
	fclose(outputfile);
	fclose(inputfile);
#endif
	return 0;
}
/*
5
2 3 1 6 5 4
3 1 2 4 6 5
5 6 4 1 3 2
1 3 6 2 4 5
4 1 6 5 2 3
*/
