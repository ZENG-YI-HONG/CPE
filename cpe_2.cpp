#include<stdio.h>
#include<stdlib.h> 
int main(){
	int row, temp, i, j, home, ans, data, m;
	int a[500]={0};
	#幾筆資料 
	scanf("%d",&data);
	
	for(i = 0; i <= data; i++)
	{
		#這筆資料有幾個值 
		scanf("%d",&row); 
		for(j = 0; j < row; j++)
		{
			scanf("%d",a[j]);
		}
		#排序 
		for(j = 0; j < row; j++)
		{
			for(m = 0; m < row-1; m++)
			{
				if(a[m] > a[m+1])
				{
					temp = a[m];
					a[m] = a[m+1];
					a[m+1] =temp;
				}
			}
		}
		ans = 0;
		home = a[row/2];
		for(j = 0; j < row;j++)
		{
			ans = ans+abs(home-a[j]);
		}
		printf("%d",ans);
	}
	return 0;
}
