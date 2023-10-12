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
	v.reserve(8);
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for(vector<int>::size_type i=0;i<v.size();++i){
		printf("%d ", v[i]);
	}
	printf("\n");
	printf("size: %d copacity: %d max_size: %d\n", v.size(), v.capacity(), v.max_size());
	printf("\n--resize(10)--\n");
	v.resize(10);
	for(vector<int>::size_type i=0;i<v.size();++i){
		printf("%d ", v[i]);
	}
	printf("\n");
	printf("size: %d copacity: %d max_size: %d\n", v.size(), v.capacity(), v.max_size());
	printf("\n--resize(3)--\n");
	v.resize(3);
	for(vector<int>::size_type i=0;i<v.size();++i){
		printf("%d ", v[i]);
	}
	printf("\n");
	printf("size: %d copacity: %d max_size: %d\n", v.size(), v.capacity(), v.max_size());
	printf("\n--vector clear()--\n");
	v.clear();
	if(v.empty()){
		printf("\n");
	}
	printf("size: %d copacity: %d max_size: %d\n", v.size(), v.capacity(), v.max_size());
	return 0;
}
