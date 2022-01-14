#include <stdio.h>
int main()
{
    int i,j;
    int x=0;
    
    while(x<=0)
    {
        printf("整数を入力してください。\n");
        scanf("%d",&x);
    }
    printf("入力された整数は%dです。\n",x);

    printf("   |");
    for(i=x;i>=1;i--)
    {
        printf("%4d",i);
    }
    printf("\n");
    for(i=x+1;i>=1;i--)
    {
        printf("----");
    }
    printf("\n");

    for(i=x;i>=1;i--)
    {
        printf("%3d|",i);
        for(j=x;j>=1;j--)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }

    return 0;
}