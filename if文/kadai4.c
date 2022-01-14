#include <stdio.h>
int main()
{
    char x,y,z;
    printf("あなたは女性ですか?\n");
    printf("YかNで答えてください。\n");
    printf("(小文字も可)\n");
    x=getchar();
    z=getchar();
    printf("あなたは成人ですか?\n");
    printf("YかNで答えてください。\n");
    printf("(小文字も可)\n");
    y=getchar();
    
    if((x=='Y'&&y=='Y')||(x=='y'&&y=='y'))
    {
        printf("あなたは成人女性です。\n");
    }
    else if((x=='Y'&&y=='N')||(x=='y'&&y=='n'))
    {
        printf("あなたは未成年女性です。\n");
    }
    else if((x=='N'&&y=='Y')||(x=='n'&&y=='y'))
    {
        printf("あなたは成人男性です。\n");
    }
    else if((x=='N'&&y=='N')||(x=='n'&&y=='n'))
    {
        printf("あなたは未成年男性です。\n");
    }

    return 0;

}