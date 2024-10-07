#include<stdio.h> 
#include<stdlib.h>
#include<algorithm>
#include <string.h> 
using namespace std;
int main()
{
	char str[1000]={0};
	int f = 1;
	while(gets(str))
	{
		if(f == 0)
		{
			printf("\n");
		}
		int count[150]={0};
		for(int i = 0; i < strlen(str); i++)
		{
			count[str[i]]++;
		}
		for(int i = 1 ; i <= strlen(str); i++)
		{
			for(int j = 150; j > 0; j--)
			{
				if(count[j] == i)
				{
					printf("%d %d\n",j, i);
				}
			}
		}
		f = 0;
	}
}
