#include<stdio.h>

#define ARRAY_SIZE (5)

int main(void)
{
  int i;
  char array_char[ARRAY_SIZE]={'v','w','x','y','z'};

  int array_int[ARRAY_SIZE]={10,9,8,7,6};

  char *pointer_char;
  int *pointer_int;

  pointer_char=array_char;
  pointer_int=array_int;

  for(i=0;i<ARRAY_SIZE;i++)
  {
    printf("pointer_charは%pを指しており値は%cです。\n",*(pointer_char+i),*(pointer_char+i));
  }

  for(i=0;i<ARRAY_SIZE;i++)
  {
    printf("pointer_charは%pを指しており値は%dです。\n",*(pointer_int+i),*(pointer_int+i));
  }
  return 0;
}