#include<stdio.h>
#include<stdlib.h>
#include<string.h>




int main()
{
	char ch[100],num;
	int len;
	gets(ch);
	len = strlen(ch);
	for(int i = len-1; i>=0; i--)
	{
		printf("%c",ch[i]);
	} 
}

