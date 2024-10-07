#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
	int m, n;
	
	while(scanf("%d %d",&n, &m)!=EOF)
	{
		if( n == 0 && m==0)
		{
			break;
		}
		int num[1001]={0};
		for(int i = 1; i <= n; i++)
		{
			scanf("%d",&num[i]);
		}
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j < n; j++)
			{
				if(num[j] % m > num[j + 1] % m)
				{
					swap(num[j],num[j+1]);
				}
			}
		}
		for(int i = 1; i <= n; i++)
		{
			for(int j= 1; j < n; j++)
			{
				
				if(num[j]%2!=0 && num[j+1]%2==0 || num[j]%2==0 && num[j+1]%2!=0)
				{
					if(num[j]%m==num[j+1]%m)
					{
						if(num[j+1]%2!=0)
						{
							swap(num[j],num[j+1]);
						}
					}
				}
				if(num[j]%2!=0 && num[j+1]%2!=0)
				{
					if(num[j]%m == num[j+1]%m)
					{
						if(num[j+1]>num[j])
						{
							swap(num[j],num[j+1]);
						}
					}
				}
				if(num[j]%2==0 && num[j+1]%2==0)
				{
					if(num[j]%m == num[j+1]%m)
					{
						if(num[j]>num[j+1])
						{
							swap(num[j],num[j+1]);
						}
					}
				}
										
			}
		}
		for(int i = 1; i <= n;i++)
		{
			printf("%d\n",num[i]);
		}
	}
	
}

