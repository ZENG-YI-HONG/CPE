#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void ten(char*);
int main()
{
	char arr[10]="1101";
	ten(arr);
}
void ten(char* arr)
{
	int val = 0;
	for(int i = strlen(arr)-1; i <= 0; i--)
	{
		printf("%d %d\n",pow(2,i),arr[i]);
		val += pow(2,i)*arr[i];
	}
	printf("%d",val);
}



