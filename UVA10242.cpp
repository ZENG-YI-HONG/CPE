#include<stdio.h> 
#include<stdlib.h>
#include<algorithm>
#include <string> 
using namespace std;
int main()
{

	int n;
	while(n--)
	{
		char str[100][1001]={0};
		int row = 0;
		while(gets(str[row]))
		{
			row++;
		}
		sort(str,str+row);
	}
}
