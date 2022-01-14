#include <stdio.h>
int main ()
{
    int x;
    printf("年を西暦で入力してください\n");
    scanf("%d",&x);
    if(x<1896||x>2021)
    {
        printf("入力された年は%d年です。\n",x);
        printf("1896から2021までの年を入力してください。\n");
    }
    else if(x==1906)
    {
         printf("入力された年は%d年です。\n",x);
         printf("%d年は夏季オリンピック特別開催年です。\n");
    }
    else if(x==1940 ||x==1916||x==1944)
    {
         printf("入力された年は%d年です。\n",x);
         printf("%d年はオリンピックが中止された年です。\n",x);
    }
    else if(x==2020)
    {
         printf("%d年はオリンピックが延期になりました。\n",x);
    }
    else if(x%4==0 ||x==2021)
    {
         printf("入力された年は%d年です。\n",x);
         printf("%d年はオリンピック開催年です。\n",x);
    }
    else if(x%4!=0)
    {
         printf("入力された年は%d年です。\n",x);
         printf("%d年はオリンピック開催年ではありません。\n");
    }

    return 0;
}