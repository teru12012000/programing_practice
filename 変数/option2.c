#include <stdio.h>
int main()
{
    unsigned short int x,y;

    unsigned short int mask;

    printf("正の10進数を入力してください。\n");
    scanf("%hd",&x);
    printf("%dは2進数で、",x);

    mask=0x8000;
    y=(x&mask)/32768;
    x=x<<1;
    y+=(x&mask)/32768;
    x=x<<1;
    y+=(x&mask)/32768;
    x=x<<1;
    y+=(x&mask)/32768;
    x=x<<1;
    y+=(x&mask)/32768;
    x=x<<1;
    y+=(x&mask)/32768;
    x=x<<1;
    y+=(x&mask)/32768;
    x=x<<1;
    y+=(x&mask)/32768;
    x=x<<1;
    y+=(x&mask)/32768;
    x=x<<1;
    y+=(x&mask)/32768;
    x=x<<1;
    y+=(x&mask)/32768;
    x=x<<1;
    y+=(x&mask)/32768;
    x=x<<1;
    y+=(x&mask)/32768;
    x=x<<1;
    y+=(x&mask)/32768;
    x=x<<1;
    y+=(x&mask)/32768;
    x=x<<1;
    y+=(x&mask)/32768;
    
    printf("1は%d個です。\n",y);

    return 0;
}