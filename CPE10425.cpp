#include<stdio.h>
#include<string.h>

int main()
{
	char dict[] ="qwertyuiop[]asdfghjkl;'\\zxcvbnm,.//";
	char input[100];
	while(gets(input)!=0)
	{
		for(int i = 0; i < strlen(input);i++)
		{
			if(input[i]==32)
			{
				printf(" ");
			}
			if(input[i]>='A'&&input[i]<='Z')
			{
				
				input[i]=input[i]+32;
			}
			for(int j = 0; j < strlen(dict); j ++)
			{				
				if(input[i]==dict[j])
				{
					printf("%c",dict[j-2]);
				}
			}
			
		}
		printf("\n");
	}
} 
