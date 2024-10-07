#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int prim(int);

int main() 
{
	int num;
	while( cin >> num)
	{
		char str[1001] = {0};
		itoa(num, str,10);
		reverse(str, str + strlen(str));
		int re = atoi(str);
		
		if( prim(num) == 0 && prim(re) == 0 || prim(num) == 0 && prim(re) == 1)
		{
			printf("%d is not prime.\n",num);
		}
		else if(  prim(num) == 1 && prim(re) == 0 || re == num)
		{
			printf("%d is prime.\n",num);
		}
		else if(   prim(num) == 1 && prim(re) == 1 || re != num)
		{
			printf("%d is emirp.\n",num);
		}
	}
}

int prim(int num)
{	
	if (num < 2) return 0; 
//	cout << num;
	for(int i = 2; i < num; i++)
	{
		if(num % i == 0)
		{
//			cout << i <<" ";
			return 0;
		}
	}
//	cout << "\n";
	return 1;
}
