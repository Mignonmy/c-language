#include <stdio.h>

int main()
{
	int a=5;
	int b=6;
	int t=0;   /*此时需要第三个角色来帮助实现转移*/ 
	
	t=a; 
	a=b;
	b=t;
	
	printf("a=%d b=%d",a,b);
	
	getchar(); /*帮助再一次运行应用程序的时候不会一闪而过*/ 
	return 0;
}
