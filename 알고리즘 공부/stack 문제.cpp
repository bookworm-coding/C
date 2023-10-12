#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <random>
using namespace std;
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char input[200];
	gets(input);
	int result[strlen(input)];
	stack<int> s;
	int num=1;
	for(int i=0;i<strlen(input);i++){
		if(input[i]=='('){
			s.push(i);
		}
		else if(input[i]==')'){
			if(s.empty()){
				printf("WRONG EXPRESSION");
				return 0;
			}
			result[s.top()]=num;
			result[i]=num++;
			s.pop();
		}
	}
	if(s.empty()){
		for(int i=0;i<strlen(input);i++){
			printf("%d ", result[i]);
		}
	}
	else{
		printf("WRONG EXPRESSION");
		return 0;
	}
	return 0;
}
