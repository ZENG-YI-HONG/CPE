#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, j, k, count, m, n;
	while(scanf("%d %d",&m, &n)!=EOF )
	{
		if(m == 0 && n == 0)
		{
			break;
		}
		else
		{
			for(i = 0; i <= 10; i++)
			{
				j = m % 10;
				k = n % 10;
				if(j+k>=10)
				{
					count++;
					m=m+10;
				}
				m = m / 10;
				n = n / 10;
			}
			if(count == 1)
			{
				printf("1 carry operation.\n");
			}
			else if(count == 0)
			{
				printf("No carry operation.\n");
			}
			else
			{
				printf("%d carry operations.\n",count);
			}		
			count = 0;
		}

			
	}

	
	return 0;
}
 
