#include<stdio.h>
#include<string.h>

char map[100][100]={0};
int higth, width;

int squer(int, int, int);

int main()
{
	int m, n, i, j;
	scanf("%d\n",&n);
	while(n--)
	{
		scanf("%d%d%d\n",&higth,&width,&m);
		for(i = 0; i<higth ; i++)
		{
			gets(map[i]);
		}
		int x, y, raduio;
		while(m--)
		{
			scanf("%d %d",&x, &y);
			raduio = 0;
			while(squer(x,y,raduio)!=0)
			{
				raduio++;
			}
			printf("%d\n",2*raduio-1);
		}
		
	}
	return 0;
}
int squer(int x, int y, int raduio)
{
	int up, down, left, right, i, j;
	up = x - raduio;
	down = x + raduio;
	left = y - raduio;
	right = y + raduio;
	
	if(up < 0 || down >= higth || left < 0 || right >= width)
	{
		return 0;
	}
	for(i = up; i <= down; i++)
	{
		for(j = left; j <= right; j++)
		{
			if(map[i][j]!=map[x][y])
			{
				return 0;
			}
		}
	}
	return 1;
}
