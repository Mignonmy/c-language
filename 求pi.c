#include <stdio.h>
#include <math.h>
int main()
{
	int i=1;  //��ĸ 
	double k=1.0; //���� 
	double j=1.0;  //����
	double sum=0.0;
	while(fabs(j)>1e-6){ //fabs() ���������ľ���ֵ 
		j=k/i;
		sum+=j;
		i+=2;
		k=-k;
	}
	printf("pi is equal to %10.8f",4.0*sum);
	
	return 0;
}
