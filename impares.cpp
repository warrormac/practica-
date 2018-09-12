#include <iostream>

using namespace std;

int main()
{
    int a,b=-1;
    cin>>a;

    while(b<a)
    {
        b+=2;
        cout<<b;
       if (b<=a && b>=1 && b<a)
            cout<<",";

    }

}
