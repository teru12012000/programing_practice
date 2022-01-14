#include<stdio.h>
#define char_size (5)
#define int_size (5)
#define uint_size (3)
void print_array(void* p,int k)
{
  int i;
  if(k==1)
  {
    for(i=0;i<char_size;i++)
    {
      printf("%c\n",*((char*)p+i));
    }
  }
  else if(k==2)
  {
    for(i=0;i<int_size;i++)
    {
      printf("%d\n",*((int*)p+i));
    }
  }
  else if(k==3)
  {
    for(i=0;i<uint_size;i++)
    {
      printf("%ld\n",*((unsigned int*)p+i));
    }
  }

  
}
int main (void)
{
  char array_char[5]={'h','e','l','l','o'};
  int array_int[5]={-2,-1,0,1,2};
  unsigned int array_uint[3]={1,2,3};

  print_array(&array_char,1);
  printf("-----\n");
  print_array(&array_int,2);
  printf("-----\n");
  print_array(&array_uint,3);

  return 0;
}