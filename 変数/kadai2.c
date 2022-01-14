#include <stdio.h>
int main(void)
{
    int m;
    double w;

    printf("温州みかんの重さを入力してください\n");
    scanf("%lf",&w);

    printf("温州みかんの個数を入力してください\n");
    scanf("%d",&m);

    printf("温州みかんの一つあたりの重さは%.1lfです。\n",w);
    printf("温州みかんの個数%dはです。\n",m);
    /*(double)w*(int)m;*/
    printf("%dのみかんの重さは%.1lfです。\n",m,(double)w*m);

    return 0;
}