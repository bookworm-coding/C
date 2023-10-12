#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
#include <random>
#include <stack>
#include <queue>
#include <vector> 
using namespace std;
struct person{
	int classnum;
	int num;
};
bool cmp (const person& a, const person& b) {
	if(a.classnum==b.classnum){
		return a.num<b.num;
	}
	else{
		return a.classnum<b.classnum;
	}
    
}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	struct person person[n];
	struct person sorted[n];
	for(int i=0;i<n;i++){
		int temp;
		scanf("%d", &temp);
		person[i]={temp, i+1};
		sorted[i]={temp, i+1};
	}
	sort(sorted, sorted+n, cmp);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(person[i].num==sorted[j].num){
				printf("%d ", j+1);
				break;
			}
		}
	}
	return 0;
}
