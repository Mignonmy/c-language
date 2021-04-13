//当一次冒泡过程中发现没有交换操作时，表明序列已经排好序了，终止冒泡操作、
#include <stdio.h> 
int main()
{
	int a[5]={3,4,1,5,8};
	int i,j,t,k;
//	for(i=0;i<5;i++) scanf("%d",&a[i]);
	for(i=0;i<4;i++){
		k=0;
		for(j=0;j<4-i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				k=1;
			}
		}
		if(k==0) break;//还是需要遍历所有比较，这里只是为了避免后面有可能全部已经排好的又浪费比较而已 
	}
	for(i=0;i<5;i++) printf("%d ",a[i]);

	
	return 0;
}
