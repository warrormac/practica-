#include <iostream>

using namespace std;

int prim(int a )
{
    int d=0, b=2, c=2;
    while (b<a)
    {
        if (a%b==0)
            d=1;
        else
            d==0;
        b=b+1;



    }

    if (d==0)
        cout<<b<<" ";




}


int cont(int a)
{
    int b=2;
    while (b<=a)
    {
        prim(b);
        b++;

    }

}


int main()
{
    int a;
    cin>>a;
    cont(a);

}
