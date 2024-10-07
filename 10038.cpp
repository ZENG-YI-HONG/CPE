#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	
	int m, n, f;
	int temp;
	while(scanf("%d",&n)!=EOF)
	{
		int a[100]={0}, dif[100]={0};
		for(int i = 0; i < n; i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i = 0; i < n-1; i++)
		{
			dif[i] = abs(a[i]-a[i+1]);
		}
		for(int i = 0; i < n-1; i++)
		{
			for(int j = 0; j < n-1; j++)
			{
				if(dif[j]>dif[j+1])
				{
					temp = dif[j];
					dif[j] =dif[j+1];
					dif[j+1] =temp;
				}
			}
		}
//		for(int i = 0; i < n; i++)
//		{
//			printf("%d",dif[i]);
//		}
		f = 0;
		for(int i = 0; i <= n-1; i++)
		{
			if(dif[i]!=i)
			{
				f=1;
				break;
			}
		}
		if(f == 0)
		{
			printf("Jolly\n");
		}
		else
		{
			printf("Not jolly\n");
		}
	}
	
 } 
