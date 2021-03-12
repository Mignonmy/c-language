#include <stdio.h>
int main(void) {
	int x,n=0;
	scanf("%d",&x);
	n++;  //循环体外的语句为保证一些特殊值（0,10，个位数，负数，边界数等等） 
	x/=10;
	while (x>0)  //和if不同的在这是反复多次，if只有一次判断机会
	{ 
		n++;
		x/=10; //这就是循环体内改变条件的机会，必须要有，不然进入死循环
	}
	printf("%d",n);
	return 0;
} 
/*也可以用do-while来做，do-while是先做执行循环体再判断，肯定会执行一次，而
while不一定执行，有可能不经过循环直接出结果。do-while格式：
do{
   循环语句
  }while(判断)； */
