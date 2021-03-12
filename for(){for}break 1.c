#include <stdio.h>
int main()
{
	int x=2;
	int one,two,five;
	int exit=0;
	for (one=1;one<x*10;one++){
		for(two=1;two<x*10/2;two++){
			for(five=1;five<x*10/5;five++){
				if(one+two*2+five*5==x*10){
					printf("%d可以有%d个一角和%d个两角和%d个五角所得\n",x,one,two,five);
					exit=1;
					break;
				}
			}
			if(exit==1)break;
		}
		if(exit==1)break;
	}
	return 0;
 } 
