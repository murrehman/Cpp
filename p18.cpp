#include<iostream>

using namespace std;

int main()
{
    int x,n,t,k;
    x=1;
    cout<<"Enter number=";
    cin>>n;
    cout<<"value=";
    cin>>k;
    while(x<=k)
    {
        t=n*x;
        cout<<n<<"*"<<x<<"=";
        cout<<t<<endl;
        x++;
    }
    return 0;
}