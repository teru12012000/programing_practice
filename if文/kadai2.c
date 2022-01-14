#include <stdio.h>
int main ()
{
    double x,y;
    double epsilion=0.000000000001;
    double difference;
    x=0.15+0.15;
    y=0.1+0.2;
    if(x>y)
    {
        difference=x-y;
    }
    else
    {
        difference=y-x;
    }
    if(difference<epsilion)
    {
        printf("%2fと%2fは等しいです。\n",x,y);
    }
    else 
    {
        printf("%2fと%2fは異なります。\n",x,y);   
    }
    
    return 0;
}