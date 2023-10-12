#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char n[13];
	memset(n, '\0', sizeof(char)*13);
	scanf("%s", n);
	int changed[13];
	memset(changed, 0, sizeof(int)*13);
	for(int i=0;i<strlen(n);i++){
		changed[i]=n[i]-'0';
	}
	std::sort(changed, changed+strlen(n));
	for(int i=0;i<strlen(n);i++){
		if(changed[i]==0){
			
		}
		else{
			printf("%d", changed[i]);
		}
		
	}
	return 0;
}
