#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	char str[10001]={0};
	
	while(scanf("%s",str)!=EOF)
	{
		int max = 0, carry = 0, sum=0;
		for(int i = 0; i < strlen(str); i++)
		{
			carry = 0;
			if(str[i]>='0'&&str[i]<='9')
			{
				carry = str[i]-'0';
			}
			if(str[i]>='A'&&str[i]<='Z')
			{
				carry = str[i]-'A'+10;
			}
			if(str[i]>='a'&&str[i]<='z')
			{
				carry = str[i]-'a'+36;
			}
			if(carry>max)
			{
				max = carry;
			}
			sum+=carry;
		}
		int flag = 0;
		for(int i = max+1; i <= 62; i++)
		{
			if(sum == 0)
			{
				printf("2\n");
				flag = 1;
				break;
			}
			
			if((sum%(i-1))==0)
			{
				printf("%d\n",i);
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			printf("such number is impossible!\n");
		}
	}
	


 }
 

