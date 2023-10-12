#include <cstdio>
#include <cstdlib>
#include <cstring>
#define _USE_MATH_DEFINES
#include <cstdbool>
#include <algorithm>
#include <cmath>
#include <random>
#include <stack>
#include <queue>
#include <vector>
#include <ctime>
#include <tuple>
#include <sal.h>
#pragma warning(disable : 4996)
using namespace std;
vector<char> vc;
void make(char data[], char last) {
	int n = (int)vc.size();
	bool a = true;
	if (strcmp(data, "\0") == 0) {
		a = false;
	}
	else {
		printf("%s\n",data);
	}
	char temp[11];
	for (int i = 0; i < n; i++) {
		if (vc[i]<last) {

		}
		else if (strchr(data, vc[i]) == NULL) {
			if (a == true) {
				sprintf(temp, "%s%c", data, vc[i]);
			}
			else {
				sprintf(temp, "%c", vc[i]);
			}
			make(temp, vc[i]);
		}
	}
	return;
}
int main(void) {
	std::ignore=freopen("input.txt", "r", stdin);
	std::ignore=freopen("output.txt", "w", stdout);
	int n;
	std::ignore=scanf("%d", &n);
	for (char i = 'a'; i < 'a' + n; i++) {
		vc.push_back(i);
	}
	char temp[] = "\0";
	make(temp, '\0');
	return 0;
}
