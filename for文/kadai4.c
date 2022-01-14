#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    unsigned int seed;
    int n;
    int x=1;

    
        printf("乱数の種を入力してください。\n");
        scanf("%u",&seed);
        srand(seed);
    while(x==1) 
    {
        printf("さいころを何回降りますか?\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("%3d",rand()%6+1);
        }
        printf("\n");
        printf("もう一回サイコロを振りますか?(Yes:1,NO:0)\n");
        scanf("%d",&x);
        while(x!=0&&x!=1)
        {
            printf("0か1を入力してください。\n");
            printf("もう一回サイコロを振りますか?(Yes:1,NO:0)\n");
            scanf("%d",&x);
        }
    }
        return 0;

}