#include<stdio.h>

double x_plus_y(double x,double y)
{
  printf("xのアドレスは%p,yのアドレスは%pです。\n",&x,&y);

  return x+y;
}
int main(void)
{
  double x,y;
  x=y=0.5;
  printf("xのアドレスは%p,yのアドレスは%pです。\n",&x,&y);
  printf("%f\n", x_plus_y(x,y));

  return 0;
}