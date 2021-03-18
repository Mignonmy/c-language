#include <stdio.h>
#include <math.h>
int main()
{
	
	int i,j,cnt=0;
	for(i=1;i<500;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				
				break;
			} 
		}
		if(i==j){ //一直除到相等的数都不能找到因数，证明这个数是素数 
			cnt++;
			printf("%5d",i);
			if(cnt%10==0){
				printf("\n");
			}
		}
	}
	return 0;
}
