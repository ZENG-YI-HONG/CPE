#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, j, k,  m ,n, sum=0,temp, count, max=0;
	while(scanf("%d %d",&m ,&n) != EOF)
	{
		j = m;
		k = n;
		if(j > k)
		{
			temp = k;
			k = j;
			j = temp;
		}
		for(i = j; i <= k; i++)
		{
			count = 1;
			sum = i;
			while( sum != 1)
			{
				count++;
				if(sum%2 != 0)
				{
					sum = (3*sum)+1;
				}
				else
				{
					sum = sum/2;

				}
			}
			if(count>max)
			{
				max = count;
			}			
		}
			printf("%d %d %d\n",m ,n, max);
	}

	
	return 0;
} 
