#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    unsigned int seed;
    int n;

    printf("乱数の種を入力してください\n");
    scanf("%u",&seed);
    srand(seed);
    printf("rand関数は0~%dの範囲の乱数を出力します。\n\n",RAND_MAX);
    printf("乱数を何個生成しますか?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",rand());
    }

    return 0;
}