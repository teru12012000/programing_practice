#include <stdio.h> 

int olympic_check(int year)
{
  if(year<1896||year>2021)
    {
        return -2;
        
    }
    else if(year==1906)
    {
        return 2;
         
    }
    else if(year==1940 ||year==1916||year==1944)
    {
         return -1;
    }
    else if(year==2020)
    {
      return -3;
    }
    else if(year%4==0||2021)
    {
         return 1;
    }
    else if(year%4!=0)
    {
         return 0;
    }
}
int main (void)
{
    int year;
    int result;
    printf("年を西暦で入力してください\n");
    scanf("%d",&year);
    result=olympic_check(year);

    if(result==1)
    {
      printf("%d年はオリンピック開催年です。\n",year);
    }
    else if(result==2)
    {
      printf("%d年はオリンピック特別開催です。\n",year);
    }
    else if(result==-1)
    {
      printf("%d年はオリンピック中止年です。\n",year);
    }
    else if(result==-2)
    {
      printf("1904年から2021年までの年を入力してください。\n");
    }
    else if(result==0)
    {
      printf("%d年はオリンピック開催年ではありません。\n",year);
    }
    else if(result==-3)
    {
      printf("%d年はオリンピックが延期されました。\n",year);
    }
   
    return 0;
}