#include<stdio.h>
#include<stdlib.h>
#define SUB 2
#define NUM 5

int main(void)
{
    int **test;
    int point[NUM][SUB];
    int i,j;
    point[0][0]=80;
    point[0][1]=60;
    point[0][2]=22;
    point[0][3]=50;
    point[0][4]=75;
    point[1][0]=90;
    point[1][1]=55;
    point[1][2]=68;
    point[1][3]=72;
    point[1][4]=58;

    test=(int **)malloc(sizeof(int*)*SUB);

    for(i=0;i<SUB;i++)
    {
        test[i]=(int *)malloc(sizeof(int)*NUM);
    }

    if(test==NULL)
    {
        printf("メモリ確保エラー\n");
        return -1;
    }

    for(i=0;i<SUB;i++)
    {
        for(j=0;j<NUM;j++)
        {
            test[i][j]=point[i][j];
        }
    }
    
    for(i=0;i<NUM;i++)
    {
        printf("%d番目の国語の点数は%d点です。\n",i+1,test[0][i]);
        printf("%d番目の算数の点数は%d点です。\n",i+1,test[1][i]);
    }
    free(test);

    return 0;
}