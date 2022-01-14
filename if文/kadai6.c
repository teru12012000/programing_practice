#include <stdio.h>
int main ()
{
    int x,y;
    printf("大小比較したい2つの整数を入力してください。\n");
    scanf("%d",&x);
    scanf("%d",&y);
    switch (x>y)
    {
        case 1:
        printf("%dは%dより大きいです。\n",x,y);
        break;
        case 0:
        break;
    }
    switch (x<y)
    {
    case 1:
        printf("%dは%dより大きいです。\n",y,x);
        break;
    
    case 0:
        break;
    }
    switch (x==y)
    {
    case 1:
        printf("%dと%dは等しいです。\n",x,y);
        break;
    
    case 0:
        break;
    }
    return 0;
}