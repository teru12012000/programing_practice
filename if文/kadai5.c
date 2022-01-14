#include <stdio.h>
int main ()
{
    int x;

    x=0;
    if(10>5 && (x=3)==3)
    {
        printf("Ture\n");
    }
    else
    {
        printf("False");
    }
    printf("xの値は%dです。\n",x);

    x=0;
    if(10<5 && (x=3)==3)
    {
        printf("Ture\n");
    }
    else 
    {
        printf("False\n");
    }
    
    printf("xの値は%dです。\n",x);

    return 0;

}