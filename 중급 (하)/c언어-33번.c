#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdbool.h>
bool input[1010][1010];
int result[1010][1010];
int main() {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
        }
    }
    char tempc[1010];
    for (int i = 0; i < n; i++) {
        scanf("%s", tempc);
        for (int j = 0; j < n; j++) {
            if (tempc[j] == '0') {
                input[i][j] = false;
            }
            else if (tempc[j] == '*') {
                input[i][j] = true;
            }
        }
    }
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 1; k > -2; k--) {
                for (int l = 1; l > -2; l--) {
                    if (i + k >= 0 && j + l >= 0 && i + k < n && j + l < n && input[i + k][j + l]) {
                        result[i][j]++;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
