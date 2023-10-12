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
	vector<int> v;
	vector<int>::iterator it;
	for(int i=10;i>=1;i--){
		v.push_back(i);
	}
	printf("\n");
	for(it=v.begin();it!=v.end();it++){
		printf("%d ", *it);
	}
	printf("\n\n");
	sort(v.begin(), v.end());
	printf("\n");
	for(it=v.begin();it!=v.end();it++){
		printf("%d ", *it);
	}
	return 0;
}
