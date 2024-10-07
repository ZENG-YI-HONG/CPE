#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	long long s, d,count;
	while(scanf("%lld %lld",&s, &d)!=EOF)
	{
		
		while(s<d)
		{
			d -= s++;
		}
		printf("%d\n",s);
	}

	
 } 
