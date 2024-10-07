#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
	char a[1000];
	
	while(scanf("%s",a)!=EOF)
	{
		int odd, eve;
		if(a[0] == '0')
		{
			break;
		}
		for(int i = 0; i < strlen(a); i++)
		{
			if(i%2!=0)
			{
				odd += a[i] - '0';
			}
			else
			{
				eve += a[i] - '0';
			}
		}
		int ans = abs(odd - eve);
		if((ans%11)==0)
		{
			printf("%s is a multiple of 11.\n");
		}
		else
		{
			printf("%s is not a multiple of 11.\n");
		}
	}
	
	
	
	
} 
