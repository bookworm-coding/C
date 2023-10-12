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
bool is_prime(int n) {
	if (n == 0 || n == 1) {
		return false;
	}
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main(void)
{
#ifndef _DEBUG
	FILE* inputfile=freopen("input.txt", "r", stdin);
	FILE* outputfile=freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	for (int i = (int)pow(10, n - 1); i < (int)pow(10, n); i++) {
		string temp = to_string(i);
		bool a=true;
		for (int j = 1; j <= temp.size(); j++) {
			int ctemp = stoi(temp.substr(0, j));
			if (is_prime(ctemp) == false) {
				a = false;
				break;
			}
		}
		if (a) {
			cout << temp << endl;
		}
	}
#ifndef _DEBUG
	fclose(outputfile);
	fclose(inputfile);
#endif
	return 0;
}
