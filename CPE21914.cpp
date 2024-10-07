#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	
	char str[101][101] = {0};
    int row = 0;
    int i, j;
    int max_len = 0;
	
	while(gets(str[row]))
	{
		if(max_len<strlen(str[row]))
		{
			max_len = strlen(str[row]);
		}
		row++;
	}
	
	// qwer zaq
	// asd  xsw
	// zx    de
	//        r
	int gap = 0;
	for(i = 0; i < max_len; i++)
	{
		gap = 0;
		for(j = row-1; j >= 0; j--)
		{
			printf("%d %d\n",i, strlen(str[j]));
			if(i>=strlen(str[j]))
			{
				gap++;
			}
			else
			{
				while(gap>0)
				{
					printf(" ");
					gap--;
				}
				printf("%c",str[j][i]);
				
			}
			
		}
		printf("\n");
	}
	return 0;
 }
 

