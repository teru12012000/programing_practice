#include<stdio.h>

#define ARRAY_SIZE (5)

int main(void)
{
  int i;
  char array_char[ARRAY_SIZE]={'v','w','x','y','z'};
  int array_int[ARRAY_SIZE]={10,9,8,7,6};

  char *pointer_char;
  int *pointer_int;
  pointer_char=(char*)array_int;
  pointer_int=(int *)array_char;

  for(i=0;i<ARRAY_SIZE;i++)
  {
    printf("array_charは%pを指しており値は%cです。\n",*((char*)pointer_int+i),*((char*)pointer_int+i));
  }

  for(i=0;i<ARRAY_SIZE;i++)
  {
    printf("array_intは%pを指しており値は%dです。\n",*((int*)pointer_char+i),*((int*)pointer_char+i));
  }
  return 0;
}