#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char input[201];
	memset(input, '\0', sizeof(char) * 201);
	gets(input);
	bool a = true;
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] == '*' || input[i] == '.') {
			a = false;
			break;
		}
	}
	if (a) {
		int n = (strlen(input) % 6 == 0 ? 0 : 6 - strlen(input) % 6) + strlen(input);
		for (int i = 0; i < n; i++) {
			if (input[i] == ' ') {
				input[i] = '*';
			}
			if (input[i] == '\0') {
				input[i] = '.';
			}
		}
		for (int j = 0; j < 6; j++) {
			for (int i = j; i < n; i+=6) {
				printf("%c", input[i]);
			}
		}
	}
	else {
		int n = strlen(input);
		for (int i = 0; i < n; i++) {
			if (input[i] == '*') {
				input[i] = ' ';
			}
		}
		for (int j = 0; j < n/6; j++) {
			for (int i = j; i < n; i+=n/6) {
				if (input[i] != '.') {
					printf("%c", input[i]);
				}

			}
		}
	}
	return 0;
}
