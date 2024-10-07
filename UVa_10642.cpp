#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

int loc(int, int);
int main(){
   
   	int m, count = 1;
   	scanf("%d\n",&m);
   	while(m--)
   	{
   		int x1, x2, y1, y2;
		scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
		printf("Case %d: %d\n",count, loc(x2,y2)-loc(x1,y1));
		count++;
	}
}
int loc(int x, int y)
{
	return (((x+y)*(x+y+1))/2)+x;
}

