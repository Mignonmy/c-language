#include <stdio.h>
int main()
{
	int i,j;
	for(i=9;i>0;i--){
		for(j=1;j<=i;j++){
			printf("%d*%d=%d ",j,i,j*i);
		}
		printf("\n");
	}
	return 0;
}
