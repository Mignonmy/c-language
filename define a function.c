#include <stdio.h>
int jolly(void);
int deny(void); //���������� 

int main(void)
{
	jolly(); //�����ĵ��� 
	jolly();
	jolly();
	deny();
	
	getchar();
	return 0;

}
int jolly(void) //��������Ŀ�ʼ �������� ������������ֵ����������ͣ� 
{
	printf("For he's jolly good fellow!\n");
	
	return 0;
 } 
 int deny(void) //����һ�������Ķ��� 
 {
 	printf("Which nobody can deny!\n");
 	
 	return 0;
 }
 
 
 
 
 
 
 
 
