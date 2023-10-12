#include "all.h"
int main(void)
{
#ifndef _TEST
	ignore=freopen("input.txt", "r", stdin);
	ignore=freopen("output.txt", "w", stdout);
#endif
	char input[10000];
	gets_s(input, sizeof(input));
	stack<int> s;
	auto len = strlen(input);
	for(int i=0;i < len;i++){
		if(input[i]=='[')
		{
			s.push(i);
		}
		else if(input[i]==']')
		{
			auto temp = s.top();
			s.pop();
			for (int j = temp; j <= i; j++)
			{
				input[j] = NULL;
			}
			
		}
	}
	for(int i=0;i<len;i++)
	{
		if(input[i]!=NULL)
		{
			printf("%c", input[i]);
		}
	}
	return 0;
}
