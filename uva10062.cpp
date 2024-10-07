#include<stdio.h>
#include<string.h> 
#include<stdlib.h> 

int main()
{
	char str[1001]={0};
	
	int m ,n ,i, j;
	while(gets(str))
	{
		int count[1001]={0};
		for(i = 0; i <= strlen(str); i++)
		{
			count[str[i]]++;
		}
		
		for( i = 1; i <= strlen(str); i++)
		{
			for( j = 127; j >= 32; j--)
			{
				if(count[j] == i)
				{
					printf("%d %d\n",j , i);
				}
			}
		}
	}
	
}
