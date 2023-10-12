#include <stdio.h>
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char input;
	scanf("%c", &input);
	printf("%d", input-'A'+1);
	return 0;
}
