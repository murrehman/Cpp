#include<iostream>

using namespace std;

int main()
{
    int bs,hr,ma,ca,gs;
    cout<<"bs=";
    cin>>bs;
    cout<<"hr=";
    hr= bs/100*40;
    cout<<hr<<endl;
    cout<<"ma=";
    ma= bs/100*15;
    cout<<ma<<endl;
    cout<<"ca=";
    ca=bs/100*25;
    cout<<ca<<endl;
    cout<<"gs=";
    gs=bs+hr+ma+ca;
    cout<<gs<<endl;

    return 0;


}

