#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char ord[100][100], pat[100], sub[100][100];
    int m, n;

	scanf("%d",&m);
    while(m--)
    {
    	int count = 0;
 		scanf("%d",&n);
 		for(int i = 0; i <= n; i++)
 		{
 			gets(pat);
			strcpy(ord[i],pat);	
			if(strcmp(ord[i],"LEFT")==0)
			{
				strcpy(sub[i],"-");	
				
				count--;
				
			}
			if(strcmp(ord[i],"RIGHT")==0)
			{
				strcpy(sub[i],"+");	
				
				count++;
				
			}
			if(ord[i][0] == 'S')
			{
				int a = atoi(&ord[i][8]);
				
				if(strcmp(sub[a], "+")==0)
				{
					strcpy(sub[i],"+");	
					
					count++;
					
				}
				else if(strcmp(sub[a], "-")==0)
				{
					strcpy(sub[i],"-");	
					
					count--;
					
				}
				
			}
		}
			printf("%d\n",count);	
	}
    
    return 0;
}

