#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <math.h>

using namespace std;
int num[1000]={0};
int main() {
	
	
	int n, count = 1;;
	scanf("%d\n",&n);
	while(n--)
	{
		int num;
		
		scanf(" N = %d\n",&num);
		int mar[num*num] ={0};
		for(int i = 0; i < num*num; i++)
		{
			scanf("%d",&mar[i]);
		}
		int flag = 0;
		for(int i = 0; i < num*num; i++)
		{
//			printf("%d %d\n",mar[i], mar[(num*num)-i-1]);
			if(mar[i]!=mar[(num*num)-i-1]||mar[i]<0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			printf("Test #%d: Symmetric.\n",count);
		}
		else
		{
			printf("Test #%d: Non-symmetric.\n",count);
		}
		count++;
	}

 }
 

