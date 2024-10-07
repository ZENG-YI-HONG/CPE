#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int f91(int);
int main() {
	
	int m;
	int a[1000]={0};
	scanf("%d",&m);
	while(m--)
	{
		int n;
		scanf("%d",&n);
		for(int i = 0; i < n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		int temp;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n-1; j++)
			{
				if(a[j]>a[j+1])
				{
					temp = a[j+1];
					a[j+1] = a[j];
					a[j] = temp;
				}
			}
		}
		int holf = n/2;
		int sum = 0;
		for(int i = 0; i < n;i++)
		{
			sum += abs(a[i]-a[holf]);
		}
		printf("%d\n",sum);
	}

  return 0;
}

