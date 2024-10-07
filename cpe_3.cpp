#include<stdio.h>
#include<stdlib.h>

int main(){
	long long int i, j ,k, temp, sum=0;
	while(scanf("%lli%lli",&j,&k)!=EOF){	
	sum=sum+abs(j-k);
	printf("%lli\n",sum);
	sum=0;
}

return 0;
}
