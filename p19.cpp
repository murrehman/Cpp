#include<iostream>

using namespace std;

int main()
{
    long int n,f;
    f=1;
    cout<<"number=";
    cin>>n;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    cout<<"factorial="<<f;
    return 0;
}