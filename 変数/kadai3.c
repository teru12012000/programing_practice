#include <stdio.h>
int main ()
{
    int y,m,d,o;
    printf("生まれた年を入力してください。\n");
    scanf("%d",&y);
    printf("生まれた月を入力してください。\n");
    scanf("%d",&m);
    printf("生まれた日を入力してください。\n");
    scanf("%d",&d);
    o=20191002-(y*10000+m*100+d);
    printf("%d年%d月%d日生まれの人は%d歳です。\n",y,m,d,(int)o/10000);

    return 0;
    
}