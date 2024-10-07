#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
	int m, n;
	
	
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		int a_c = 0 ,temp=0;
		if(m == 0 && n == 0)
		{
			break;
		}
		
		while(m != 0 || n != 0)
		{
			printf("%d + %d + %d\n",n % 10, m % 10, temp );
			if((n % 10) + (m % 10) + temp >= 10)
			{
				a_c+=1;
				temp = 1;
			}
			else
			{
				temp = 0;
			}
			m=m/10;
			n=n/10;
		}
		if(a_c == 0)
		{
			printf("No carry operation.\n");
		}
		else if(a_c == 1)
		{
			printf("1 carry operation.\n");
		}
		else if(a_c > 1)
		{
			printf("%d carry operations.\n",a_c);
		}
	}
	
} 
