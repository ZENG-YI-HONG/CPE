#include<stdlib.h>
#include<string.h>
#include<stdio.h> 
#include<algorithm>

using namespace std;
int main()
{
	
	
	int row, col, c = 1, f = 0;
	
	while(scanf("%d %d\n",&row, &col)!=EOF)
	{
		if(row==0&&col==0)
		{
			break;
		}
		if(f == 1)
		{
			printf("\n");
		}
		char map[100][1001]={0};
		for(int i = 0; i < row; i++)
		{
			gets(map[i]);
		}
		printf("Field #%d",c);
		for(int i = 0; i < row; i++)
		{
			for(int j = 0; j < col; j++)
			{
				int count = 0;
				if(j-1>=0 && i-1>=0 && map[i-1][j-1] == '*')//¥ª¤W 
				{
					count++;
				}
				if(i-1>=0 && map[i-1][j] == '*')//up
				{
					count++;
				}
				if( i-1>=0 && j+1<=col && map[i-1][j+1]=='*')// ¥k¤W 
				{
					count++;
				}
				if( j-1>=0 && map[i][j-1]=='*')
				{
					count++;
				}
				if( j+1<=col && map[i][j+1]=='*')
				{
					count++;
				}
				if( i+1<=row && j-1>=0 && map[i+1][j-1]=='*')
				{
					count++;
				}
				if( i+1<=row && map[i+1][j]=='*')
				{
					count++;
				}
				if( i+1<=row && j+1<=col && map[i+1][j+1]=='*')
				{
					count++;
				}
				if( map[i][j] =='*')
				{
					printf("*");
				}
				else
				{
					printf("%d",count);
				}
				
			}
			printf("\n");
		}
		c++;
		f = 1;
	}
	
	
}
