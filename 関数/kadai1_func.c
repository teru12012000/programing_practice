#include<stdio.h>
#include<stdlib.h>
int compare_x_and_y(int x,int y)
{
  return (x<=100&&x>=1&&y>=1&&y<=100&&x<y);
}
int main(void)
{
  int i,x,y,sum=0;
  srand(1027);
  for(i=1;i<=1000000000;i++)
  {
      x=rand()%1000;
      y=rand()%1000;
  
    if(compare_x_and_y(x,y))
    {
      sum+=x;
    }
    if(i%100000000==0)
    {
      printf("%d\n",sum);
      sum=0;
    }
  }
  return 0;
}