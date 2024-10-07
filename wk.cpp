#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define max 1001

char s[max]; //儲存字串 
int next[max]; // 紀錄位置 

int main()
{
	next[0] = 0; //初始為零 
	int len; 
	 // ptr是紀錄最長前綴的值 ex:aaaa ptr = 3 abab=2, 
	 //i的作用是一直前進搜所字串陣列裡的字元 
	int ptr = 0, i = 1 , j, k; 
	while(1)
	{
		ptr = 0;
		i = 1;
		scanf("%s",s);
		
		// "."結束 
		if(strcmp(s, ".") == 0)
		{
			break;
		}
		
		// 計算長度 
		len = strlen(s);
		
		//while的關係 i 會多跑一次 
		while( i < len)
		{
			//                       0 1 2 3 4 5 6 7
			//假設字元相同 ex:       a b a c a b a b , 0 and 3位置相同
			// ptr=^位置跟i="^"位置  ^  "^" 
			
			//把ptr的值記錄起來放進next 
			
			//	ptr會前進   		a b a c a b a b 
			//                        ^  "^"
			if(s[ptr] == s[i])
			{
				ptr++;
				next[i]=ptr;
				i++;
			}
			else
			{
				//反之如果不相等且ptr = 0, 那next會記錄為0, i繼續探索 
				if(ptr == 0)
				{
					next[i] = 0;
					i++;
				}
				else
				{
				// 反之不相同且ptr != 0,
				//       0 1 2 3 4 5 6 7
				//   ex: a b a c a b a b 
				//         ^  "^"
				// next: 0 0 1 
				//此時找ptr前面的next值, 此時該值為0
				// 將ptr = 0回到前面做比較
				
				//       0 1 2 3 4 5 6 7
				//   ex: a b a c a b a b 
				//       ^      "^"				
				 
					ptr = next[ptr-1];
				}
			}
		}		
		// 如果這個字串裡是重複字串的話ex:ababab
		// 那next的最後一個值最長的前綴
		//  j代表字串裡的組別數目 ex:ababab, ab為一組 
		int j = len - next[i-1];
		printf("next[%d] = %d, len = %d, j = %d\n",i-1, next[i-1], len, j);
		if( len % j == 0)
		{
			k = len/j;
		}
		else
		{
			k = 1;
		}
		for( i = 0; i < len; i++)
		{
			printf("%d",next[i]);
		}
		printf("\n");
		printf("%d",k);
	}


	return 0;
}
