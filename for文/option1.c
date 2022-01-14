#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        int i, x=0, y, z;
        unsigned int seed;
        int a=1;
        int b=100;
     printf("####### キングを探せ #######\n");
    printf("プレイヤーには2枚のジャックと1枚のキングの合計3枚の\nカードが配られます。キングを見つける事が出来た場合\n掛け金分の勝ちとなります\n\n");

    while(a==1)
    {
        seed = (unsigned int)time(NULL);
        srand(seed);
        z = rand() % 3 + 1;

        printf("***カードを配ります***\n");
        //カード表示
        printf("カード：");

        for (i = 0; i < 3; i++)
        {
            printf("|?|\t");
        }
        printf("\n");
        printf("         ");
        for (i = 0; i < 3; i++)
        {
            printf("%d\t", i + 1);
        }
        printf("\n");

        //カードを表示終了
        while(x<=0||x>=4)
        {
            printf("カードを選択してください：");
            scanf("%d", &x);
        }

        printf("==========================================================\n");
        printf("カード：");

        for (i = 0; i < 3; i++)
        {   
            printf("|?|\t");
        }
        printf("\n");
        printf("         ");
        for (i = 0; i < 3; i++)
        {
            printf("%d\t", i + 1);
        }
        printf("\n");
        printf("         ");
        for (i = 1; i < 4; i++)
        {
            if (x == i)
            {
                printf("^selected card");
            }
            else
            {
                printf("  \t");
            }
        }
        printf("\n");

        printf("==========================================================\n");
        printf("いくら賭けますか？（現在１００クレジット）：");
        scanf("%d", &y);
        printf("\n");

        printf("***最終結果***\n");
        //カード表示３
        printf("カード：");

        for (i = 1; i < 4; i++)
        {
            if (z == i)
            {
                printf("|K|\t");
            }
            else
            {
                printf("|J|\t");
            }
        }
        printf("\n");
        printf("         ");
        for (i = 0; i < 3; i++)
        {
            printf("%d\t", i + 1);
        }
        printf("\n");
        printf("         ");
        for (i = 1; i < 4; i++)
        {
            if (x == i)
            {
                printf("^selected card");
            }
            else
            {
                printf("  \t");
            }
        }
        printf("\n");

        if (x == z)
        {
            b +=y;
            printf("正解です！\n");
            printf("現在のクレジットは%dになりました\n", b);
        }
        else
        {
            b-=y;
            printf("不正解です\n");
            printf("現在のクレジットは%dになりました\n", b);
        }
        
        if(b<=0)
        {
            printf("クレジット残高が0以下になりました。\n");
            printf("ゲームオーバーです。\n");
            exit(0);
        }
        a=3;
        while(a!=0&&a!=1)
        {
            printf("続けますか？(Yes:1,No:0)\n");
            scanf("%d",&a);
        }
        
    }

    return 0;
}