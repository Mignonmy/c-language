#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct student)
struct student{
    int num;
    char name[10];
    struct student* next;
};
struct student* creat()
{
    struct student *head,*p1,*p2;
    int n;
    head=NULL;
    p1=p2=(struct student*)malloc(LEN);
    n=1;
    scanf("%d %s",&p1->num,&p2->name);
    while(p1->num!=0){
        if(n==1) head=p1;
        else p2=p1->next;
        p2=p1;
        p1=(struct student*)malloc(LEN);
        scanf("%d %s",&p1->num,&p1->name);

    }
    p2->next=NULL;
    return (head);

}
int main()
{
    struct student *p;
    p=creat();
    printf("%d %s",p->num,p->name);
}
