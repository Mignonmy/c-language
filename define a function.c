#include <stdio.h>
int jolly(void);
int deny(void); //函数的声明 

int main(void)
{
	jolly(); //函数的调用 
	jolly();
	jolly();
	deny();
	
	getchar();
	return 0;

}
int jolly(void) //函数定义的开始 返回类型 函数名（参数值，需表明类型） 
{
	printf("For he's jolly good fellow!\n");
	
	return 0;
 } 
 int deny(void) //另外一个函数的定义 
 {
 	printf("Which nobody can deny!\n");
 	
 	return 0;
 }
 
 
 
 
 
 
 
 
