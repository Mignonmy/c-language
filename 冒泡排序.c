//ÅÅĞò 3 5 0 1 2 9
#include <stdio.h>
int main()
{
	int number[6]={3,5,0,1,2,9};
	int i,t,j; 
	for(i=0;i<5;i++){
		for(j=0;j<6-i;j++){
			if(number[j]>number[j+1])
			{
				t=number[j];
				number[j]=number[j+1];
				number[j+1]=t;	
			}
		}
	}
	for(i=0;i<6;i++){
		printf("%d ",number[i]);
	}
	return 0;
 } 
