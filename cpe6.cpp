#include<stdio.h>
#include<string.h>

#define max 1001

char s[max];
int main()
{
	scanf("%s",s);
	int	len = strlen(s);
	int odd = 0, eve;
	for( int i = 0; i < len; i++)
	{
		if(i%2==0)
		{
			odd = odd+(s[i] - '0');
		}
		else
		{
			eve = eve+(s[i] - '0');
		}
	}
	int c;
	if((eve+odd)%11==0)
	{
		c=0;
	}
	else
	{
		c =1;
	}
	if(c == 1)
	{
		printf("%s",s);
	}
	
	
	return 0;
 } 
