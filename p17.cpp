#include<iostream>

using namespace std;

int main()
{
    int x,n,t;
    x=1;
    cout<<"Enter number=";
    cin>>n;
    while(x<=10)
    {
        t=n*x;
        cout<<n<<"*"<<x<<"=";
        cout<<t<<endl;
        x++;
    }
    return 0;
}