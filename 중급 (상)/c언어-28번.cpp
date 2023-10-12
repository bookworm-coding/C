#define _USE_MATH_DEFINES
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdbool>
#include <algorithm>
#include <cmath>
#include <random>
#include <stack>
#include <queue>
#include <vector>
#include <ctime>
#include <tuple>
#pragma warning(disable : 4996)
using namespace std;
int main(void) {
	ignore=freopen("input.txt", "r", stdin);
	ignore=freopen("output.txt", "w", stdout);
	char input[7];
	gets_s(input, 6);
	for (int i = strlen(input); i < 7; i++) {
		input[i] = '\0';
	}
	strrev(input);
	char iinput[7];
	strcpy(iinput, input);
	strrev(iinput);
	char temp[7];
	memset(temp, '\0', sizeof(char) * 7);
	int t = 0;
	for (int i = 0; i < strlen(iinput) && i < strlen(input) || t>0; i++) {
		temp[i] = (iinput[i] - '0' + input[i]-'0' + t)%10+'0';
		t = (iinput[i] - '0' + input[i] - '0' + t) / 10;
	}
	char ttemp[7];
	memset(ttemp, '\0', sizeof(char) * 7);
	strcpy(ttemp, temp);
	strrev(ttemp);
	printf(strcmp(temp, ttemp) == 0 ? "YES" : "NO");
	return 0;
}
