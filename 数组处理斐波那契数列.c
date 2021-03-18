#include <stdio.h>
int main()
{
	int n1=1,n2=1,n3,i;
	int cnt1,cnt2;
	int series[20];
	series[0]=1;
	series[1]=1;
	for(cnt1=3,i=2;cnt1<=20;cnt1++,i++){ //cnt1记录存放进去数组20个 
		n3=n1+n2;
		series[i]=n3;
		n1=n2;
		n2=n3;
	}
	for(cnt2=1,i=0;cnt2<=20;cnt2++,i++){
		printf("%10d",series[i]);
		if(cnt2%5==0){
			printf("\n");
		}
	}
	
	return 0;
}
