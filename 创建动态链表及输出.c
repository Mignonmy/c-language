#include <stdio.h>
#include <malloc.h>
#define LEN sizeof(struct student)
struct student{
    long num;
    float score;
    struct student *next;
};
struct student *creat()
{
    struct student *p1,*p2,*head;
    p1=p2=(struct student*)malloc(LEN);
    int n=0;
    head=NULL;
    scanf("%ld,%f",&p1->num,&p1->score);
    while(p1->num!=0)
    {
        n++;
        if(n==1) head=p1;
        else p2->next=p1;
        p2=p1;
        p1=(struct student*)malloc(LEN);
        scanf("%ld,%f",&p1->num,&p1->score);

    }
    p2->next=NULL;
    return (head);

}
void pr(struct student *h)
{
    struct student *p;
    p=h;
    if(h!=NULL)
    {
        do{
            printf("%lf %f\n",p->num,p->score);
            p=p->next;
        }while(p!=NULL);
    }
}
int main()
{
    struct student *p;
    p=creat(); //创建
    pr(p); //输出
    return 0;
}
