/*�ֶκ�����switch-case��ʾ �������������� 
f(x)=-1 x<0
f(x)=0 x=0
f(x)=2x x>0 */
#include <stdio.h>
int main (void) {
	int x,y;
	scanf("%d",&x);
	switch(x>0) //��������ǹ�ϵ���㣬Ҳ�����Ǳ��� 
	{	case 1: //case�ո����Ź�ϵ�������������ʾ ������ϣ�������￪ʼ��ֱ��break���� 
		printf("y=2x");
		break;
		
		case 0:
		switch(x==0) //���ٴη�֧ 
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
