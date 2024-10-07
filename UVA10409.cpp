#include<stdlib.h>
#include<string.h>
#include<stdio.h> 
#include<algorithm>

using namespace std;
int main()
{
	
	int m;

	while(scanf("%d\n",&m)!=EOF)
	{
		if(m==0)break;
		int up = 1, down = 6, n = 2, s = 5, e = 4, w = 3, t;
		char str[100][1001]={0};
		for(int i = 0; i  < m; i++)
		{
			gets(str[i]);
		}
		for(int i = 0; i  < m; i++)
		{
			if(strcmp(str[i],"north")==0)
			{
				t = up, up = s, s = down, down = n, n = t;
			}
			if(strcmp(str[i],"east")==0)
			{
				t = up, up = w, w = down, down = e, e = t;
			}
			if(strcmp(str[i],"south")==0)
			{
				t = up,  up = n, n = down, down = s, s = t;
			}
			if(strcmp(str[i],"west")==0)
			{
				t = up, up = e, e = down, down = w, w = t;
			}
		}
		printf("%d\n",up);
		
	}

	
	
}
