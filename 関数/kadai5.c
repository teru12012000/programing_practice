#include <stdio.h>
void fibnum(int *x,long int *y_1)
{
  int i;
  int x_0=0,x_1=1;
   for(i=2;i<=*x;i++)
    {
            *y_1=x_0+x_1;
            x_0=x_1;
            x_1=*y_1;

    }
}
int main(void)
{
    int n=1;
    long int x;
    while(n<2)
    {
        printf("何番目のフィボナッチ数列を入力しますか?\n2以上の数を入力してください。\n");
        scanf("%d",&n);
    }
    fibnum(&n,&x);
    
    printf("%d番目のフィボナッチ数列は%ldです。\n",n,x);

   
    return 0;
}