#include <stdio.h>

void menu();
void no();
void lx();
void cs();

int main()
{
    int exit=1,n;
    while(exit)
    {
        system("cls");
        menu();
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            lx();
            break;
       case 2:
            cs();
            break;
        default:
            no();
        }
    }
    return 0;
}
void menu()
{
   printf("欢迎使用本系统\n");
   printf("1: 练习系统\n");
   printf("2: 测试系统\n");
}
void no()
{
    printf("您的输入有误，请重新输入。");
}
void lx()
{
    system("cls");
    int x,y;
    int ans;
    int i;
    scanf("%d",&x);
    scanf("%d",&y);
    for(i=1;i<=3;i++)
    {
        printf("%d*%d=",x,y);
        scanf("%d",&ans);
        if(ans==x*y)
        {
            printf("RIGHT");
            break;
        }
        if(i==3)
        {
         printf("Wrong! test is over");
        break;
        }
        else
        {
         printf("Wrong! Please try again");
        printf("\n");
        }
    }system("pause");
}
void cs()
{
    system("cls");
    int x,y;
    int ans;
    int i,t=0;
    int sum=0;

    for (i=1;i<=5;i++)
    {
        scanf("%d",&x);
        scanf("%d",&y);
        printf("%d*%d=",x,y);
        scanf("%d",&ans);
        if(ans==x*y)
        {
            printf("RIDHT");
            sum=sum+1;
            t++;
            printf("\n");
        }
        else
        {
         printf("Wrong");
        printf("\n");
        }
    }
    printf("分数为%d",sum);
    printf("正确率为百分之%d\n",t*20);
    system("pause");
}