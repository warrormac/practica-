#include <iostream>

using namespace std;

int main()
{
    int a,b=1;
    cin>>a;
    while(b<a)
    {
        cout<<b;
        b+=2;
        if (b<a && b>0)
            cout<<",";
    }
}
