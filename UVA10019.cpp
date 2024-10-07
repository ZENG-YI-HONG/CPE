#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int gcd(int, int);
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int g = 0;
		for(int i = 1; i < n; i++)
		{
			for(int j = i + 1; j <= n; j++)
			{
				g += gcd(i, j);
			}
		}
		printf("%d\n",g);
	}
}
int gcd(int m, int n)
{
	int t = 1;
	while(t != 0)
	{
		t = m % n;
		m = n;
		n = t;
	}
	return m;
}


