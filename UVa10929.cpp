#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
	char a[1001]={0};
	
	while(gets(a))
	{
		long long  odd=0, eve=0;
		if(a[0]=='0')
		{
			break;
		}
		for(int i =0; i < strlen(a); i++)
		{
			if(i%2==0)
			{
				eve += a[i] - '0';
			}
			else if(i%2!=0)
			{
				odd += a[i] - '0';
			}
		}
		
		
		if((odd-eve)%11==0)
		{
			printf("%s is a multiple of 11.\n",a);
		}
		else
		{
			printf("%s is not a multiple of 11.\n",a);
		}
	}

	
}

