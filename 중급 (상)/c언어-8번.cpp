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
	char input[1002];
	gets(input);
	char result[1002];
	memset(result, '\0', sizeof(char)*1002);
	int n=0;
	char before='\0';
	int num=0;
	for(int i=0;i<strlen(input);i++){
		if(input[i]!=before){
			if(i!=0){
				if(n==0){
					result[num]=input[i-1];
					num++;
				}
				else if(n>=9){
					n++;
					result[num]=n/10+'0';
					result[num+1]=n%10+'0';
					result[num+2]=before;
					num+=3;
					n=0;
				}
				else{
					result[num]=n+1+'0';
					result[num+1]=before;
					num+=2;
					n=0;
				}
			}
			before=input[i];
		}
		else{
			n++;
		}
	}
	if(n==0){
		result[num]=input[strlen(input)-1];
		num++;
	}
	else if(n>=9){
		n++;
		result[num]=n/10+'0';
		result[num+1]=n%10+'0';
		result[num+2]=before;
		num+=3;
		n=0;
	}
	else{
		result[num]=n+1+'0';
		result[num+1]=before;
		num+=2;
		n=0;
	}
	printf("%s", result);
	return 0;
}
