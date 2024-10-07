#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 1000

int main() {

	int m, n;
	
	while(scanf("%d %d",&m, &n)!=EOF)
	{
		int count = 0;
		int a[100];
		a[count]=1;
		for(int i = 1; i <=m ;)
		{	
			if(n==1)break;
			i = i*n;
			a[++count] = i;						
		}
		if(a[count-1]!=m || n == 1 && m ==1)
		{
			printf("Boring!\n");
		}
		else
		{
			while(count--)
			{	
				printf("%d",a[count]);
				if(count!=0)
				{
					printf(" ");	
				}					
			}
			printf("\n");
				
		}
	}

  return 0;
}

