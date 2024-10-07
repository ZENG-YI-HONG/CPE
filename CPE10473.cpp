#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cutting(int); 
int main()
{
   	int m;
   	
   	while(scanf("%d",&m)!=EOF)
   	{
   		if(m==0)
		{
		   	break;
		} 
		else
		{
			while(m > 9)
			{
				m = cutting(m);
			}
			printf("%d",m);
		}
		   	
	}
    
    return 0;
}
int cutting(int m)
{
	int all = 0;
	while( m > 0)
	{
		all += m%10;
		m/=10;
	}
	return all;
}
