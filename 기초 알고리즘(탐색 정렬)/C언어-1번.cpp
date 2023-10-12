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
int main(void) {
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	long long int a;
	long long int b;
	long long int c;
	scanf("%lld.%lld", &a, &b);
	long long int ca[31];
	ca[0]=b;
	int i=1;
	c=a;
	while(c!=0){
		ca[i]=c%10;
		c/=10;
		i++;
	}
	bool check=false;
	for(int j=0;j<i;j++){
		if(ca[j]==2 || ca[j]==6){
			if(ca[j]==2){
				ca[j]=5;
			}
			else{
				ca[j]=9;
			}
			check=true;
			break;
		}
	}
	char temp[35];
	char temp2[35];
	memset(temp, '\0', sizeof(char)*35);
	memset(temp2, '\0', sizeof(char)*35);
	sprintf(temp, "%lld.%lld", a, b);
	for(int j=i-1;j>0;j--){
		sprintf(temp2, "%s%lld", temp2, ca[j]);
	}
	sprintf(temp2, "%s.%lld", temp2, ca[0]);
	if (strcmp(temp, temp2)==0){
		sort(ca, ca+i);
		memset(temp2, '\0', sizeof(char)*35);
		for(int j=i-1;j>0;j--){
			sprintf(temp2, "%s%lld", temp2, ca[j]);
		}
		sprintf(temp2, "%s.%lld", temp2, ca[0]);
		if (strcmp(temp, temp2)==0){
			printf("The price cannot be raised.");
		}
		else{
			printf("%s", temp2);
		}
	}
	else{
		printf("%s", temp2);
	}
	
	return 0;
}
