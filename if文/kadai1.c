#include <stdio.h>
int main ()
{
    int x,y;
    printf("大小比較したい2つの整数を入力してください。\n");
    scanf("%d",&x);
    scanf("%d",&y);
    if(x<y)
    {
        printf("%dは%dよりも大きいです。\n",y,x);

    }
    else if(x>y)
    {
        printf("%dは%dよりも大きいです。\n",x,y);
    }
    else if(x==y)
    {
        printf("%dと%dは等しいです。\n",x,y);
    }
    return 0;
}