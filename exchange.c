#include <stdio.h>

int main()
{
	int a=5;
	int b=6;
	int t=0;   /*��ʱ��Ҫ��������ɫ������ʵ��ת��*/ 
	
	t=a; 
	a=b;
	b=t;
	
	printf("a=%d b=%d",a,b);
	
	getchar(); /*������һ������Ӧ�ó����ʱ�򲻻�һ������*/ 
	return 0;
}
