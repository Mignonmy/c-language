#include <stdio.h>
int main()
{
	int n1=1,n2=1,n3;
	int cnt;
	printf("%10d%10d",n1,n2);
	for(cnt=3;cnt<=40;cnt++){
		n3=n1+n2;
		printf("%10d",n3);
		n1=n2;
		n2=n3;
		if(cnt%4==0){
			printf("\n");
		}
	}
	return 0;
}
