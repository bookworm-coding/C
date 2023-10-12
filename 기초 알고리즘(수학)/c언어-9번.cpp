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
struct student {
	bool gender;
	int num;
};
vector<bool> command(vector<bool> sw, struct student v) {
	if (v.gender == true) {
		for (int i = v.num-1; i < sw.size(); i += v.num) {
			sw[i] = (sw[i] == false);
		}
	}
	else {
		int i, j;
		for (i = v.num-2, j = v.num; i >= 0 && j < sw.size(); i--, j++) {
			if (sw[i] == sw[j]) {

			}
			else {
				break;
			}
		}
		for (int k = i+1; k < j; k++) {
			sw[k] = (sw[k] == false);
		}
	}
	return sw;
}
int main(void)
{
#ifndef _DEBUG
	FILE* inputfile=freopen("input.txt", "r", stdin);
	FILE* outputfile=freopen("output.txt", "w", stdout);
#endif
	int switchnum;
	vector<bool> sw;
	cin >> switchnum;
	for (int i = 0; i < switchnum; i++) {
		int temp;
		cin >> temp;
		if (temp == 0) {
			sw.push_back(false);
		}
		else {
			sw.push_back(true);
		}
	}
	int studentnum;
	cin >> studentnum;
	vector<struct student> st;
	for (int i = 0; i < studentnum; i++) {
		int t1;
		int t2;
		cin >> t1 >> t2;
		st.push_back({ t1 == 1 ? true : false, t2 });
	}
	for (int i = 0; i < st.size(); i++) {
		sw = command(sw, st[i]);
	}
	for (int i = 0; i < sw.size(); i++) {
		cout << (sw[i] == true ? 1 : 0) << " ";
		if (i != 0 && i % 20 == 0) {
			cout << endl;
		}
	}
#ifndef _DEBUG
	fclose(outputfile);
	fclose(inputfile);
#endif
	return 0;
}
