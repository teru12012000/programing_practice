#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 3

void get_coefficients(int argc,char *argv[],double *alpha,double a[N+1])
{
  
  if(argc==11&&strcmp(argv[1],"-a0")==0&&strcmp(argv[3],"-a1")==0&&strcmp(argv[5],"-a2")==0&&strcmp(argv[7],"-a3")==0&&strcmp(argv[9],"-alpha")==0) 
  {
    a[0]=atof(argv[2]);
    a[1]=atof(argv[4]);
    a[2]=atof(argv[6]);
    a[3]=atof(argv[8]);
    *alpha=atof(argv[10]);
  }
  else
  {
    printf("program -a0 数字 -a1 数字-a2 数字 -a3 数字 -alpha 数字とコマンドで入力してください。\n ");
    exit(0);
  }
  
}
double function(double alpha,double a[N+1])
{
  return ((a[0]*alpha+a[1])*alpha+a[2])*alpha+a[3];
}
int main(int argc,char **argv)
{
  int i;
  double alpha=0;
  double a[N+1]={0,};
  get_coefficients(argc,argv,&alpha,a);

  printf("係数:\n");
  for(i=0;i<N+1;i++)
  {
    printf("a[%d]=%f\n",i,a[i]);
  }
  printf("alpha=%f\n",alpha);
  printf("f(alpha)=%f\n",a[0]*alpha*alpha*alpha+a[1]*alpha*alpha+a[2]*alpha+a[3]);
  printf("f(alpha)=%f\n",function(alpha,a));

  return 0;
}