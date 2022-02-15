#include<iostream>

using namespace std;

int main()
{
    int bs,ma,hr,gs;
    cout<<"bs=";
    cin>>bs;
    if(bs>2500)
    {
        hr=bs/100*10;
        ma=bs/100*15;
    }
    else
    {
        hr=1500;
        ma=2000;
    }
    gs=bs+ma+hr;
    cout<<"gs=";
    cout<<gs;
    return 0;
}