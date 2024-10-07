#include<stdio.h>
#include<string.h>

int main(){

    char str[101];
    int row = 0;
    
    int max_length = 1;
	
	while(gets(str))
	{
		int len = strlen(str), count = 1;
		for(int i = 0; i < len; i++)
		{
			if(str[i]!='"')
			{
				printf("%c",str[i]);
			}
			else if(str[i]=='"' && count%2!=0)
			{
				printf("``");
				count++;
			}
			else
			{
				printf("''");
				count++;
			}
			
		}
		printf("\n");
	}

    return 0;
}
