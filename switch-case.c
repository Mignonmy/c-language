/*分段函数用switch-case表示 变量是整数类型 
f(x)=-1 x<0
f(x)=0 x=0
f(x)=2x x>0 */
#include <stdio.h>
int main (void) {
	int x,y;
	scanf("%d",&x);
	switch(x>0) //里面可以是关系运算，也可以是变量 
	{	case 1: //case空格后跟着关系运算结果或变量表示 如果符合，则从这里开始，直到break结束 
		printf("y=2x");
		break;
		
		case 0:
		switch(x==0) //可再次分支 
	{
		case 1:
		printf("y=0");
		break;
		case 0:
		printf("y=-1");
		break;
		
	}
	
		
	}
	
	return 0;

}
