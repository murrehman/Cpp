#include <iostream>  
using namespace std; 

int rentt(int hr, int bs)
{
    hr=bs/100*15;
    return hr;
    
    
}

int medical( int ma , int bs)
{
    ma=bs/100*10;
    return ma;
    
    
}

int travel(int ca , int bs)
{
    ca=bs/100*12;
    return ca;
    
}

int main()  
{
    long int bs,gs,ma,ca,hr,a,b,c;
    cout<<"Enter basic salary=";
    cin>>bs;
    
    a=rentt(hr,bs);
    b=medical(ma,bs);
    c=travel(ca,bs);
    gs=a+b+c+bs;
    cout<<"Gross salary=";
    cout<<gs;
    return 0;

} 