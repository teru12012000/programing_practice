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
double deffrential(double a[N+1],double *alpha)
{
  double b0,b1,b2;
  b0=3*a[0];
  b1=2*a[1];
  b2=a[2];
  return b0**alpha**alpha+b1**alpha+b2;
}
double deffrential_v2(double a[N+1],double *alpha)
{
  double b0,b1;
  b0=3*a[0];
  b1=a[1];
  return(b0**alpha+b1)*2 ;
}
double deffrential_v3(double a[N+1],double *alpha)
{
  double b0;
  b0=a[0];
  return b0*6;
}
int main(int argc,char **argv)
{
  int i;
  double alpha=0;
  double a[N+1]={0,};
  get_coefficients(argc,argv,&alpha,a);

  
  printf("alpha=%f,f(alpha)=%f\n",alpha,function(alpha,a));
  printf("係数:\n");
  for(i=0;i<N+1;i++)
  {
    printf("a[%d]=%f     ",i,a[i]);
  }
  printf("\n");
  printf("微分:\n");
  printf("f1(alpha)=%f          f2(alpha)=%f           f3(alpha)=%f\n",deffrential(a,&alpha),deffrential_v2(a,&alpha),deffrential_v3(a,&alpha));
  return 0;
}