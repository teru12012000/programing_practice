#include <stdio.h>
int main()
{
    int i;
    int x_0=0,x_1=1;
    int x=1;
    int y_1=0,y_2=0;
    while(x<2)
    {
        printf("何番目のフィボナッチ数列を入力しますか?\n2以上の数を入力してください。\n");
        scanf("%d",&x);
    }
    for(i=2;i<=x;i++)
    {
            y_1=x_0+x_1;
            x_0=x_1;
            x_1=y_1;

    }
    x_0=0;
    x_1=1;
    printf("%d番目のフィボナッチ数列は%dです。\n",x,y_1);

    for(i=2;i<=x-1;i++)
    {
            y_2=x_0+x_1;
            x_0=x_1;
            x_1=y_2;

    }
    printf("%d番目のフィボナッチ数列%dと%d番目のフィボナッチ数列%dの比は%fです。\n",x,y_1,x-1,y_2,(double)y_1/y_2);
    return 0;
}