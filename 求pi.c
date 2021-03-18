#include <stdio.h>
#include <math.h>
int main()
{
	int i=1;  //分母 
	double k=1.0; //符号 
	double j=1.0;  //分数
	double sum=0.0;
	while(fabs(j)>1e-6){ //fabs() 括号内数的绝对值 
		j=k/i;
		sum+=j;
		i+=2;
		k=-k;
	}
	printf("pi is equal to %10.8f",4.0*sum);
	
	return 0;
}
