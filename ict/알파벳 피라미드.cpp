#include <algorithm>
using namespace std;
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char start;
	scanf("%c", &start); 
	int n;
	scanf("%d", &n);
	char print_right=start+1;
	char print_left=start+1;
	int space=n*2-1;
	if(n>24 || start>'Z' || start<'A'){
		printf("입력에러!");
		return 0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<(space-(i*2+1))/2;j++){
			printf(" ");
		}
		if(i%2==1){
			for(int j=0;j<i*2+1;j++){
				print_right++;
				while(print_right>'Z' || print_right<'A'){
					if(print_right>'Z'){
						print_right-='Z';
						print_right+='A';
						print_right--;
					}
					if(print_right<'A'){
						print_right='Z';
					}
				}
				printf("%c", print_right);
			}
			print_left=print_right+(i+2)*2;
			//print_right+=(i+1)*2+1;
		}
		else{
			for(int j=0;j<i*2+1;j++){
				print_left--;
				while(print_left>'Z' || print_left<'A'){
					if(print_left>'Z'){
						print_left-='Z';
						print_left+='A';
						print_left--;
					}
					if(print_left<'A'){
						print_left='Z';
					}
				}
				printf("%c", print_left);//+8
			}
			print_right=print_left+(i*2);
			//print_right=print_left+(i+1)*2;
		}
		printf("\n");
	}
	return 0;
}
