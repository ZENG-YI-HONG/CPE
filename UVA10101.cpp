#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<algorithm>
// 
using namespace std;
void bangla(long long);
int main()
{
	long long num;
	int count = 1;
	while(scanf("%lld",&num)!=EOF)
	{
		printf("%4d. ",count);
		if(num == 0)
		{
			printf("0");
		}
		else
		{
			bangla(num);
		}
		printf("\n");
		count++;
	}
	
	
}
void bangla(long long num)
{
	if(num>=10000000)
	{
//		printf("%d",num/10000000);
		bangla(num/10000000);
		printf(" kuti");
		
		num%=10000000;
		if(num>0)printf(" ");
	}
	if(num>=100000)
	{
		
		printf("%d lakh",num/100000);
		
		num%=100000;
		if(num>0)printf(" ");
	}
	if(num>=1000)
	{
		printf("%d hajar",num/1000);
		
		num%=1000;
		if(num>0)printf(" ");
	}
	if(num>=100)
	{
		printf("%d shata",num/100);
		
		num%=100;
		if(num>0)printf(" ");
	}
	if(num)
	{
		printf("%d",num);
		//if(num>10)printf(" ");
	}	
}
