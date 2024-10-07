#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m;
	char a[100][1001], b[100], temp[1001];
	scanf("%d",&m);
	for(int i = 0; i < m; i++)
	{
		scanf("%s",a[i]);
		gets(b);
	}
	for(int i = 0; i < m-1; i++)
	{
		for(int j = 0; j < m-1;j++)
		{
			if (strcmp(a[j], a[j + 1]) < 0)
			{
				strcpy(temp, a[j+1]);
				strcpy(a[j+1], a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	int c = 1;
	for(int i = 0; i < m; i++)
	{
		
		if(strcmp(a[i],a[i+1])==0)
		{
			c++;
		}
		else
		{
			printf("%s %d\n",a[i],c);
			c = 1;
		}
//		printf("%s\n",a[i]);
	}
	
	
	
}
