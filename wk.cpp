#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define max 1001

char s[max]; //�x�s�r�� 
int next[max]; // ������m 

int main()
{
	next[0] = 0; //��l���s 
	int len; 
	 // ptr�O�����̪��e�󪺭� ex:aaaa ptr = 3 abab=2, 
	 //i���@�άO�@���e�i�j�Ҧr��}�C�̪��r�� 
	int ptr = 0, i = 1 , j, k; 
	while(1)
	{
		ptr = 0;
		i = 1;
		scanf("%s",s);
		
		// "."���� 
		if(strcmp(s, ".") == 0)
		{
			break;
		}
		
		// �p����� 
		len = strlen(s);
		
		//while�����Y i �|�h�]�@�� 
		while( i < len)
		{
			//                       0 1 2 3 4 5 6 7
			//���]�r���ۦP ex:       a b a c a b a b , 0 and 3��m�ۦP
			// ptr=^��m��i="^"��m  ^  "^" 
			
			//��ptr���ȰO���_�ө�inext 
			
			//	ptr�|�e�i   		a b a c a b a b 
			//                        ^  "^"
			if(s[ptr] == s[i])
			{
				ptr++;
				next[i]=ptr;
				i++;
			}
			else
			{
				//�Ϥ��p�G���۵��Bptr = 0, ��next�|�O����0, i�~�򱴯� 
				if(ptr == 0)
				{
					next[i] = 0;
					i++;
				}
				else
				{
				// �Ϥ����ۦP�Bptr != 0,
				//       0 1 2 3 4 5 6 7
				//   ex: a b a c a b a b 
				//         ^  "^"
				// next: 0 0 1 
				//���ɧ�ptr�e����next��, ���ɸӭȬ�0
				// �Nptr = 0�^��e�������
				
				//       0 1 2 3 4 5 6 7
				//   ex: a b a c a b a b 
				//       ^      "^"				
				 
					ptr = next[ptr-1];
				}
			}
		}		
		// �p�G�o�Ӧr��̬O���Ʀr�ꪺ��ex:ababab
		// ��next���̫�@�ӭȳ̪����e��
		//  j�N��r��̪��էO�ƥ� ex:ababab, ab���@�� 
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
