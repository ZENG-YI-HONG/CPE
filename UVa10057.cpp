#include<stdio.h> 
#include<stdlib.h>
#include<algorithm>
#include <string> 
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n)!=0)
	{
		int a[1001]={0};
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		int a1 = a[(n-1)/2];
		int a2 = a[n/2], count = 0;
		for(int i = 0; i < n; i++)
		{
			if(a[i] == a1 || a[i] == a2)
			{
				count++;
			}
		}
		printf("%d %d %d\n",a1 ,count, a1 - a2 +1);
	}

}
