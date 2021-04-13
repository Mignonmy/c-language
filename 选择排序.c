#include <stdio.h>
int main()
{
	int a[5]={4,2,6,3,8};
	int i,j,k;
	int min;
	for(i=0;i<4;i++){
		min=a[i]; //放在循环开头每次改变，而不是放在循环的初始化，这样就算i改变 
		for(j=i+1;j<5;j++)//也不能影响初始化 
			if(a[j]<min){
				min=a[j];
				k=j;
			}
		}
		a[k]=a[i];
		a[i]=min;
		
	}
	for(i=0;i<5;i++)printf ("%d ",a[i]);
	return 0;
}
