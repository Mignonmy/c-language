#include <stdio.h>
#include <stdlib.h>
int main()
{
    int pro_num;
    int vote_num;

    //获取项目和投票数
    printf("how many program you have?");
    scanf("%d",&pro_num);
    printf("how many votes you received?");
    scanf("%d",&vote_num);

    //获取投票
    int *p=(int*)malloc(vote_num*(sizeof(int)));
    printf("please vote for %d program:",pro_num);
    for(int i=0;i<vote_num;i++) scanf("%d",p+i);

    //排序
    int temp;
    for(int k=0;k<vote_num-1;k++){
        for(int j=0;j<vote_num-1-k;j++){
            if(*(p+j)>=*(p+j+1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    
    //输出投票
    for(int i=0;i<vote_num;i++) printf("%d ",*(p+i));
    free(p);
    return 0;
}
