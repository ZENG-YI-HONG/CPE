#include<stdio.h>
#include<string.h>
int figer[15][11]={ {0,0,1,1,1,0,0,1,1,1,1},//c
					{0,0,1,1,1,0,0,1,1,1,0},//d
					{0,0,1,1,1,0,0,1,1,0,0},//e
					{0,0,1,1,1,0,0,1,0,0,0},//f
					{0,0,1,1,1,0,0,0,0,0,0},//g
					{0,0,1,1,0,0,0,0,0,0,0},//a
					{0,0,1,0,0,0,0,0,0,0,0},//b
					{0,0,0,1,0,0,0,0,0,0,0},//C
					{0,1,1,1,1,0,0,1,1,1,0},//D
					{0,1,1,1,1,0,0,1,1,0,0},//E
					{0,1,1,1,1,0,0,1,0,0,0},//F
					{0,1,1,1,1,0,0,0,0,0,0},//G
					{0,1,1,1,0,0,0,0,0,0,0},//A
					{0,1,1,0,0,0,0,0,0,0,0}};//B
int main()
{
	char code[256]={0};
	code['c']=0,code['d']=1,code['e']=2,code['f']=3,code['g']=4, code['a']=5,  code['b']=6,
	code['C']=7,code['D']=8,code['E']=9,code['F']=10,code['G']=11, code['A']=12, code['B']=13;
	
	char str[100]={0};
	int n;
	scanf("%d\n",&n);
	while(n--)
	{
		gets(str);
		int state[11]={0};
		int num[11]={0};
		for(int i = 0; i < strlen(str); i++)
		{
			int t = code[str[i]];
			for(int j = 1; j < 11; j++)
			{
				if( figer[t][j] == 1 && state[j] == 0)
				{
					num[j]++;
					state[j]=1;
				}
				if( figer[t][j] == 0)
				{
					state[j] = 0;
				}
			}
		}
		for(int i = 1; i < 11; i++)
		{
			printf("%d",num[i]);
			if(i!=10)printf(" ");
		}
		printf("\n");
	}
}
