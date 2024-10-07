#include<stdio.h> 
#include<stdlib.h>
#include<algorithm>
#include <string.h> 
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int m;
		scanf("%d",&m);
		int num[1001]={0};
		for(int i = 0; i < m; i++)
		{
			scanf("%d",&num[i]);
		}
		int count = 0;
		for(int i = 0; i < m - 1; i++)
		{
			for(int j = 0 ; j < m -1; j++)
			{
				if(num[j]>num[j+1])
				{
					swap(num[j],num[j+1]);
					count++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",count);
	}
}
