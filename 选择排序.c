#include <stdio.h>
int main()
{
	int a[5]={4,2,6,3,8};
	int i,j,k;
	int min;
	for(i=0;i<4;i++){
		min=a[i]; //����ѭ����ͷÿ�θı䣬�����Ƿ���ѭ���ĳ�ʼ������������i�ı� 
		for(j=i+1;j<5;j++)//Ҳ����Ӱ���ʼ�� 
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
