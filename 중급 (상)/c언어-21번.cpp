#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
struct datas{
	int num;
	bool check;
	int place;
};
struct datas change_string_to_int(char input[], int start){
	struct datas result;
	result.num=0;
	result.check=false;
	result.place=0;
	int intinput[strlen(input)];
	for(int i=start+1;i<strlen(input);i++){
		if(input[i]<'0' || input[i]>'9'){
			if(input[i]==')'){
				result.check=true;
				result.place=i;
				break;
			}
			else{
				result.check=false;
				result.num=0;
				result.place=0;
				return result;
			}
		}
		intinput[i]=input[i]-'0';
		result.num+=intinput[i];
		result.num*=10;
	}
	result.num/=10;
	return result;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char input[301];
	gets(input);
	int do_not_print_until=-1;
	for(int i=0;i<strlen(input);i++){
		if(i<do_not_print_until){
			
		}
		else if(input[i]=='(' && input[i+1]-'0'>=1 && input[i+1]-'0'<=9){
			int k=0;
			bool check=false;
			int len=0;
			struct datas temp=change_string_to_int(input, i);
			if(temp.check){
				if(temp.place+1>=strlen(input)){
					printf("%c", input[i]);
				}
				else{
					for(int j=0;j<temp.num;j++){
						printf("%c", input[temp.place+1]);
					}
					do_not_print_until=temp.place+2;
				}
			}
			else{
				printf("%c", input[i]);
			}
			
		}
		else{
			printf("%c", input[i]);
		}
	}
	return 0;
}
