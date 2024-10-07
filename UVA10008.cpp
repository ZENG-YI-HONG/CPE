#include<stdio.h>
#include<string.h>

int main(){

    int n;
    char str[999] = {0};
    int count[91] = {0};
    int i, j, k;

    scanf("%d\n", &n);
    
	
	while(n--)
	{
		gets(str);
		for(i = 0; i < strlen(str);i++)
		{
			if(str[i]>='a' && str[i] <= 'z')
			{
				count[str[i]-32]++;
			}
			else
			{
				count[str[i]]++;
			}
		}		
	}
    for(i = sizeof(str); i >= 1; i--)
	{
		for( j = 'A'; j <= 'Z'; j++)
		{
			if(count[j]==i)
			{
				printf("%c %d\n",j, i);
			}
		}
	}


    return 0;
}
