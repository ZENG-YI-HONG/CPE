#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <string.h>
#include <string>

using namespace std;

int degre(string);
int main()
{
	string str;
	while( cin >> str)
	{
		string t = str;
		int num = 100, c = 0;
		if( str == "0") break;
		while( num > 10 && num != 0)
		{
			
			num = degre(str);
			str = to_string(num);
			c++;
		}
		if(num != 0)
		{
			cout << t << " is a multiple of 9 and has 9-degree " << c  <<"."<<"\n";
		}
		else
		{
			cout << t << " is not a multiple of 9."<<"\n";
		}
		
	}
}
int degre(string str)
{
	
	int sum = 0;
	for(int i = 0; i < str.size(); i++)
	{
		sum += str[i] -'0';
	}
	
	if(sum % 9 == 0)
	{
		return sum;
	}
	else
	{
		return 0;
	}
}
