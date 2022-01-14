#include<stdio.h>
#define ARRAY_SIZE (5)
int main(void)
{
  int i;
  char array_char[ARRAY_SIZE]={'a','b','c','d','e'};
  short int array_short_int[ARRAY_SIZE]={1,2,3,4,5};
  int array_int[ARRAY_SIZE]={1,2,3,4,5};
  long int array_long_int[ARRAY_SIZE]={1,2,3,4,5};
  float array_float[ARRAY_SIZE]={0.1,0.2,0.3,0.4,0.5};
  double array_double[ARRAY_SIZE]={0.1,0.2,0.3,0.4,0.5};

  for(i=0;i<ARRAY_SIZE;i++)
  {
    printf("array_char[%d]のアドレスは%pです。\n",i,&array_char[i]);
    printf("array_short_int[%d]のアドレスは%pです。\n",i,&array_short_int[i]);
    printf("array_int[%d]のアドレスは%pです。\n",i,&array_int[i]);
    printf("array_long_int[%d]のアドレスは%pです。\n",i,&array_long_int[i]);
    printf("array_float[%d]のアドレスは%pです。\n",i,&array_float[i]);
    printf("array_double[%d]のアドレスは%pです。\n",i,&array_double[i]);
  }

  return 0;
}