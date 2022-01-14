#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main (void)
{
    double num1,num2,num3;
    printf("半径を入力してください\n");
    scanf("%lf",&num1);
    num2=4*M_PI*num1*num1;
    num3=(4*M_PI*num1*num1*num1)/3;
    printf("表面積は%fです。\n",num2);
    printf("体積は%fです。\n",num3);
    return 0;
}