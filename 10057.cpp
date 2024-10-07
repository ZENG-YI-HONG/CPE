#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	int a[100];
	
	int m, n, temp;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n-1; j++)
			{
				if(a[j]>a[j+1])
				{
					temp = a[j];
					a[j] =a[j+1];
					a[j+1] = temp;
				}
			}
		}
		for(int i = 0; i < n; i++)
		{
			if(a[n/2]==a[i])
			{
				m++;
			}
		}
		printf("%d %d %d\n",a[n/2], m, a[n/2]-1);
	}

	
 } 
