// Power of Number

#include <iostream>  
using namespace std;  
int main()  
{
    int a,n,x,t;
    x=1;
    t=1;
    cout<<"Number=";
    cin>>a;
    cout<<"power=";
    cin>>n;
    while(x<=n)
    {
        t=a*t;
        x++;
    }
    cout<<t;
    return 0;

}