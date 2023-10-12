#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
struct calender{
	int day;
	int month;
	int year;
};
char haab[][20]={"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};
char tzolkin[][20]{"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
struct calender change(struct calender haabc){
	__int128 time=haabc.year*365+haabc.month*20+haabc.day;
	//0년 19(uayet)월 4일=380+4=384
	//1년 0월(pop) 0일=365 
	struct calender result;
	result.year=time/260;
	result.month=time%20;
	result.day=time%13+1;
	return result;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	struct calender haabc, tzolkinc;
	scanf("%d", &haabc.day);
	char temp[7];
	scanf("%s", temp);
	haabc.month=21;
	for(int i=0;i<20;i++){
		if(strlen(haab[i])==strlen(temp)){
			bool tempb=true;
			for(int j=0;j<strlen(temp);j++){
				if(haab[i][j]!=temp[j]){
					tempb=false;
					break;
				}
			}
			if(tempb){
				haabc.month=i;
				break;
			}
			
			
		}
	}
	if(haabc.month==21){
		printf("error");
		return 0;
	}
	scanf("%d", &haabc.year);
	tzolkinc=change(haabc);
	printf("%d %s %d", tzolkinc.day, tzolkin[tzolkinc.month], tzolkinc.year);
	return 0;
}
