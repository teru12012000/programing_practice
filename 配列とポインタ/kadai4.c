#include<stdio.h>

#define ARRAY_SIZE (5)

int main(void)
{
  int i;
  char array_char[ARRAY_SIZE]={'v','w','x','y','z'};
  int array_int[ARRAY_SIZE]={10,9,8,7,6,};

  void *pointer_void;

  pointer_void=(void*)array_int;
  for(i=0;i<ARRAY_SIZE;i++)
  {
    printf("pointer_intは%pを指しており値は%dです。\n",*((int*)pointer_void+i),*((int*)pointer_void+i));
  }

  pointer_void=(void*)array_char;
   for(i=0;i<ARRAY_SIZE;i++)
  {
    printf("pointer_charは%pを指しており値は%cです。\n",*((char*)pointer_void+i),*((char*)pointer_void+i));
  }
  return 0;
}