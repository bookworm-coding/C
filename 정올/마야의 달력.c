#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
char haabchar[][7]={"pop","no","zip","zotz","tzec","xul","yoxkin","mol","chen","yax","zac","ceh","mac","kankin","muan","pax","koyab","cumhu", "uayet"};
char tzolkinchar[][9]={"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk","ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};
struct date{
	int year;
	int month;
	int date;
};
struct date change(struct date haab){
	struct date tzolkin;
	long long int date;
	haab.year*=365;
	haab.month*=20;
	date=haab.year+haab.month+haab.date;
	tzolkin.year=date/260;
	date-=(260*tzolkin.year);
	tzolkin.date=date%13+1;
	tzolkin.month=date%20;
	return tzolkin;
}
int changetonumber(char month[]){
	int i, j, ok;
	for(i=0;i<19;i++){
		ok=0;
		if(strlen(month)==strlen(haabchar[i])){
			for(j=0;j<strlen(month);j++){
				if(month[j]!=haabchar[i][j]){
					ok=1;
					j=strlen(month);
				}
			}
			if(ok==0){
				return i;
			}
		}
	}
}
int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	char temp[7];
	struct date haab;
	struct date tzolkin;
	scanf("%d %s %d", &haab.date, &temp, &haab.year);
	haab.month=changetonumber(temp);
	tzolkin=change(haab);
	printf("%d %s %d", tzolkin.date, tzolkinchar[tzolkin.month], tzolkin.year);
	return 0;
}
