#include <stdio.h>
int main ()
{
    int a,b;
    printf("整数を入力してください。\n");
    scanf("%d",&a);
    b=a%10;
    printf("1桁目の値は%dです。\n",b);

    return 0;
}