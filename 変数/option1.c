#include <stdio.h>
int main()
{
    unsigned short int x;
    unsigned short int mask;

    printf("正の10進数を入力してください。\n");
    scanf("%hd",&x);
    printf("%dは2進数で、",x);

    mask=0x8000;
    printf("%d",(x&mask)/32768);
    x=x<<1;
    printf("%d",(x&mask)/32768);
    x=x<<1;
    printf("%d",(x&mask)/32768);
    x=x<<1;
    printf("%d",(x&mask)/32768);
    x=x<<1;
    printf("%d",(x&mask)/32768);
    x=x<<1;
    printf("%d",(x&mask)/32768);
    x=x<<1;
    printf("%d",(x&mask)/32768);
    x=x<<1;
    printf("%d",(x&mask)/32768);
    x=x<<1;
    printf("%d",(x&mask)/32768);
    x=x<<1;
    printf("%d",(x&mask)/32768);
    x=x<<1;
    printf("%d",(x&mask)/32768);
    x=x<<1;
    printf("%d",(x&mask)/32768);
    x=x<<1;
    printf("%d",(x&mask)/32768);
    x=x<<1;
    printf("%d",(x&mask)/32768);
    x=x<<1;
    printf("%d",(x&mask)/32768);
    x=x<<1;
    printf("%d",(x&mask)/32768);
    
    printf("です。\n");

    return 0;
}