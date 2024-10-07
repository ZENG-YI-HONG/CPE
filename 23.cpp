#include<stdio.h>

int main(){
	int a[9], b[9], c[9], i, j, a_star, b_star;
	printf("輸入a起始值\n");
	scanf("%d",&a_star);
	a[0] =a_star;
	printf("輸入b起始值\n");
	scanf("%d",&b_star);
	b[0] = b_star;
	for(i = 1; i < 9; i++)
	{
		a[i] = a[i-1] + 1;
		b[i] = b[i-1] + 1;
		c[i] = a[i] + b[i];
	}
	for(i = 0; i < 9; i++)
	{
		c[i] = a[i] + b[i];
	}	
	int d = 0;
	printf("----------------------\n");
	printf("a陣列\n");
	for( i = 0; i < 9; i ++)
	{
		d++;
		printf("%3d",a[i]);
		if(d%3==0)
		{
			printf("\n");
		}
	}
	 d = 0;
	printf("----------------------\n");
	printf("b陣列\n");
	for( i = 0; i < 9; i ++)
	{
		d++;
		printf("%3d",b[i]);
		if(d%3==0)
		{
			printf("\n");
		}
	}
	d = 0;
	printf("----------------------\n");
	printf("c陣列\n");
	for( i = 0; i < 9; i ++)
	{
		d++;
		printf("%3d",c[i]);
		if(d%3==0)
		{
			printf("\n");
		}
	}		
} 
