#include<stdio.h>
int main()
{
    short int x=31415;
    short int mask;
    printf("short型は%luバイト(%luビット)\n",sizeof(int),sizeof(int)*8);
    printf("3ビット目を取り出すと0000000000000100です。\n");
    mask=0x0004;
    printf("10進数では%dです。\n",mask & x);
    printf("5~8ビット目を取り出すと0000000010110000です。\n");
    mask=0x00f0;
    printf("10進数では%dです。\n",mask & x);

    printf("2~6ビット目を取り出した場合、");
    mask=0x003e;
    printf("10進数では%dです。\n",mask & x);

    return 0;
}