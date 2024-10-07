#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	
	int n;
	
	while(scanf("%d",&n)!=EOF)
	{
		int num[100]={0}, i = 0, y, j;
		while(scanf("%d",&num[i])!=EOF)
		{
			i++;
		}
		y = num[0]*n;
		for(j = 1; j < n; j++)
		{
				y=y*n+(a[i]*(n-j));
		}
		printf("%d\n",y);
	}

 }
 

