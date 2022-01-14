#include<stdio.h>
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