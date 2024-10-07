#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int m, n;	
	int count[1001] ={0};
	char a[100]={'/0'};
	
	scanf("%d ",&n);
//	getchar();
	while(n--)
	{	
		gets(a);
		for(int i = 0; i < strlen(a); i++)
		{
			if(a[i] >= 'a' && a[i] <= 'z')
			{
							
				count[a[i]-32]++;
			}
			else
			{				
				count[a[i]]++;
			}
		}
	}
	
	for(int i = sizeof(a); i > 0; i--)
	{
		for(int j = 65; j <= 90 ;j++)
		{
			
			if(count[j] == i)
			{
				printf("%c %d\n",j, i);
			}
		}
	}
} 
