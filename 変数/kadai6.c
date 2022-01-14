#include<stdio.h>
int main ()
{
    int x1=3, x2=3;
    printf("x1<<2=%d\n",x1<<2);
    printf("x2*2*2=%d\n",x2*2*2);

    x1=x2=16;
    printf("x1>>2=%d\n",x1>>2);
    printf("x2/2/2=%d\n",x2/2/2);

    return 0;
}