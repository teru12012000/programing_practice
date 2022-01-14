#include<iostream>
using namespace std;
int main()
{
    int p=3;
    int q=13;
    int e=11;
    int n,pha;
    int d=1;
    int a;
    n=p*q;
    pha=(p-1)*(q-1);
    while(1)
    {
        a=e*d%pha;
        if(a==1)
        {
            break;
        }
        else
        {
            d++;
        }
    }
    cout <<"n="<< n << ",φ=" << pha << ",d=" << d << endl;
    return 0;
}