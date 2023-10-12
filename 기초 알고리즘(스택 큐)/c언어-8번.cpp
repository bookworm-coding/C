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
	int n;
	scanf("%d", &n);
	int input[n];
	for(int i=0;i<n;i++){
		scanf("%d", &input[i]);
	}
	queue<int> q;
	for(int i=1;i<=n;i++){
		if(q.empty()!=true && q.front()==i){
			q.pop();
		}
		else{
			bool found=false;
			for(int j=0;j<n;j++){
				if(input[j]==0){
					
				}
				else if(input[j]==i){
					found=true;
					input[j]=0;
					break;
				}
				else{
					q.push(input[j]);
					input[j]=0;
				}
			}
			if(found){
				
			}
			else{
				printf("NO");
				return 0;
			}
		}
	}
	printf("YES");
	return 0;
}
