#include <iostream>  
using namespace std;  
int main()  
{
    int n,f,x;
    f=1;
    cout<<"Enter #=";
    cin>>n;
    for(x=n; x>=1; x--)
    {
        f=f*x;
    }
    cout<<f;
    return 0;
}