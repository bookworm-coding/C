//12번 이에요
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int print[20];
int k;
void soundex(char a[]) {
    int i, j;
    int check = 0;
    for (i = 0; i < strlen(a); i++) {
        if (a[i] == a[i - 1]) {
            continue;
        }
        else if ((a[i] == 'B' || a[i] == 'F' || a[i] == 'P' || a[i] == 'V') && check != 1){
            print[k] = 1;
            k++;
            check = 1;
        }
        else if ((a[i] == 'C' || a[i] == 'G' || a[i] == 'J' || a[i] == 'K' || a[i] == 'Q' || a[i] == 'X' || a[i] == 'S' || a[i] == 'J') && check != 2) {
            print[k] = 2;
            k++;
            check = 2;
        }
        else if ((a[i] == 'D' || a[i] == 'T') && check != 3) {
            print[k] = 3;
            k++;
            check = 3;
        }
        else if ((a[i] == 'L') && check != 4) {
            print[k] = 4;
            k++;
            check = 4;
        }
        else if ((a[i] == 'M' || a[i] == 'N') && check != 5) {
            print[k] = 5;
            k++;
            check = 5;
        }
        else if ((a[i] == 'R') && check != 6) {
            print[k] = 5;
            k++;
            check = 6;
        }
        else check = 0;
    }
}
int main(void) {
	char input[21];
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	gets(input);
	soundex(input);
	int i;
	for (i = 0; i < k; i++) {
		printf("%d", print[i]);
	}
	return 0;
}
