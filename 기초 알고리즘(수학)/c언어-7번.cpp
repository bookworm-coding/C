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
struct boonsoo {
	int boonmo, boonja;
};
struct twoboonsoo {
	struct boonsoo b1;
	struct boonsoo b2;
};
int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int lcm(int a, int b) {
	return a * b / gcd(a, b);
}
struct twoboonsoo calc(struct twoboonsoo tb) {
	struct boonsoo b1 = tb.b1;
	struct boonsoo b2 = tb.b2;
	int bm=lcm(b1.boonmo, b2.boonmo);
	b1.boonja *= bm / b1.boonmo;
	b2.boonja *= bm / b2.boonmo;
	b1.boonmo = bm;
	b2.boonmo = bm;
	return { b1, b2 };
}
struct boonsoo calc2(struct boonsoo tb) {
	auto a = gcd(tb.boonja, tb.boonmo);
	return { tb.boonmo / a, tb.boonja / a };
}
int main(void)
{
#ifndef _DEBUG
	auto inputfile=freopen("input.txt", "r", stdin);
	auto outputfile=freopen("output.txt", "w", stdout);
#endif
	struct boonsoo origin;
	cin >> origin.boonja >> origin.boonmo;
	struct boonsoo t = origin;
	struct boonsoo minus;
	minus.boonja = 1;
	minus.boonmo = 2;
	string result;
	while (t.boonja > 0 && t.boonmo > 0) {
		auto temp = calc({ t, minus });
		if (temp.b1.boonja >= temp.b2.boonja) {
			t = temp.b1;
			t.boonja -= temp.b2.boonja;
			t = calc2(t);
			if (result.empty()) {
				result = to_string(minus.boonja) + "/" + to_string(minus.boonmo);
			}
			else {
				result+="+"+ to_string(minus.boonja) + "/" + to_string(minus.boonmo);
			}
		}
		else {
			minus.boonmo++;
		}
	}
	cout << result;
#ifndef _DEBUG
	fclose(outputfile);
	fclose(inputfile);
#endif
	return 0;
}
