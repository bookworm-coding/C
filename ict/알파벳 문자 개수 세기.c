#include <stdio.h>
#include <string.h>
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char input[100000];
	gets(input);
	int letter[26];
	for(int i=0;i<26;i++){
		letter[i]=0;
	}
	for(int i=0;i<strlen(input);i++){
		if(input[i]>96){
			input[i]-=32;
		}
		input[i]-=65;
		letter[input[i]]++;
	}
	for(int i=0;i<26;i++){
		printf("%c %d\n", i+65, letter[i]);
	}
}
