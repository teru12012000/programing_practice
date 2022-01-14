#include <stdio.h>
int main ()
{
    printf("(10>5)の結果は%dです。\n",10>5);
    printf("(10<5)の結果は%dです。\n",10<5);

    printf("'A'=='A'の結果は%dです。\n",'A'=='A');
    printf("'A'=='B'の結果は%dです。\n",'A'=='B');

    if(0)
    {
        printf("Apple\n");
    }
    if (1)
    {
        printf("Banana\n");
    }
    if (3)
    {
        printf("Charry\n");
    }
    if(-4)
    {
        printf("Durian\n");
    }

    return 0;
}