#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[3][11];
    char temp[11];
    FILE *fp;
    printf("now please enter three strings:");
    for(int i=0;i<3;i++) scanf("%s",str[i]);
    for(int i=0;i<2;i++){
        for(int j=0;j<2-i;j++){
            if((strcmp(str[j],str[j+1]))>0){
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
    if((fp=fopen("s:\\cc\\lala","w"))==NULL) printf("can not open!");// 指定存盘区域文件夹，文件夹需事先建立
    // if((fp=fopen("s:\\.ddd","w"))==NULL) printf("can not open!"); 指定存盘区域
    for(int k=0;k<3;k++) fprintf(fp,"%s\n",str[k]);
    return 0;
}
