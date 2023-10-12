#include <stdio.h>
int main(void){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	long long int n;
	scanf("%lld", &n);
	long long int time=0;
	long long int t[3];
	for(t[0]=1;t[0]<n;t[0]++){
		for(t[1]=t[0];t[1]<n;t[1]++){
			t[2]=n-t[0]-t[1];
			if(t[1]<=t[2] && t[2]<t[1]+t[0]){
				time++;
				break;
			}
		}
	}
	printf("%lld", time);
	return 0;
}
