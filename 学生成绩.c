//包括了score文件
#include <stdio.h>
#define NUM 5
#define TEL 11
#define QQ 10
struct studentinfo{
        int num;
        char name[10];
        int math;
        int cl;
        int english;
        int tel[TEL];
        int qq[QQ];
    }student[10];
    FILE *fp;
static int index=0;
void infoshow(struct studentinfo *c,int k,int lenth)
{
    int i;
    printf("the student of %d's information are as follow:\n");
    for(i=0;i<lenth;i++){
        if(k==(c+i)->num){
            printf("%d ",(c+i)->num);
            printf("%s ",(c+i)->name);
            printf("%d ",(c+i)->math);
            printf("%d ",(c+i)->cl);
            printf("%d ",(c+i)->english);
            for(int k=0;k<TEL;k++) printf("%d",(c+i)->tel[k]);
            printf(" ");
            for(int j=0;j<QQ;j++)  printf("%d",(c+i)->qq[j]);
            printf("\n");
            break;
        }
    }
    
}
void add(void)
{
    fp=fopen("score","a+");//让文件指针指向所需要的文件
    printf("please enter student's num:\n");
    fscanf(stdin,"%d",&student[index].num);
    fprintf(fp,"%d",student[index].num);
    fprintf(fp," ");

    printf("please enter student's name:\n");
    fscanf(stdin,"%s",&student[index].name);
    fprintf(fp,"%s",student[index].name);
    fprintf(fp," ");

    printf("please enter student's math:\n");
    fscanf(stdin,"%d",&student[index].math);
    fprintf(fp,"%d",student[index].math);
    fprintf(fp," ");

    printf("please enter student's cl:\n");
    fscanf(stdin,"%d",&student[index].cl);
    fprintf(fp,"%d",student[index].cl);
    fprintf(fp," ");

    printf("please enter student's english:\n");
    fscanf(stdin,"%d",&student[index].english);
    fprintf(fp,"%d",student[index].english);
    fprintf(fp,"  ");

    printf("please enter student's tel with blank:\n");
    for(int i=0;i<TEL;i++) fscanf(stdin,"%d",&student[index].tel[i]);
    for(int i=0;i<TEL;i++) {fprintf(fp,"%d",student[index].tel[i]); fprintf(fp," ");}
    fprintf(fp,"  ");

    printf("please enter student's qq with blank:\n");
    for(int i=0;i<QQ;i++) fscanf(stdin,"%d",&student[index].qq[i]);
    for(int i=0;i<QQ;i++) {fprintf(fp,"%d",student[index].qq[i]); fprintf(fp," ");}
    fprintf(fp," ");

    fprintf(fp,"\n");
    fclose(fp);
    index++;
}

void check(void)
{
    printf("please enter the num of the student you want to find:");
    int n;
    scanf("%d",&n);
    fp=fopen("score","r");//让文件指针指向所需要的文件
    if(fp==NULL) printf("can not open!");
    int k;
    // student[index].num=fscanf(fp,"%d",&student[index].num);
    
    while((fscanf(fp,"%d",&student[index].num))==1){
    // fscanf(fp,"%d",&student[index].num);
    fscanf(fp,"%s",&student[index].name);
    fscanf(fp,"%d",&student[index].math);
    fscanf(fp,"%d",&student[index].cl);
    fscanf(fp,"%d",&student[index].english);
    for(int i=0;i<TEL;i++) fscanf(fp,"%d",&student[index].tel[i]);
    for(int i=0;i<QQ;i++) fscanf(fp,"%d",&student[index].qq[i]);
    index++;
    }
    int len=sizeof(student)/sizeof(struct studentinfo);
    infoshow(student,n,len);
    fclose(fp);
}

int main()
{
    
    
    printf("1 add student's information\n");
    printf("2 check student's information\n");
    printf("do you want to do something? y or n :");
    char ch;
    scanf("%c",&ch);
    while(ch=='y'){
    printf("which choice you want to operate:");
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1:add(); break;
        case 2:check(); break;
    }
        printf("do you want to do something? y or n :");
    while(getchar()!='\n') continue;
    // putchar(ch);
    
        scanf("%c",&ch);
    }

    printf("done!");
    return 0;
}
