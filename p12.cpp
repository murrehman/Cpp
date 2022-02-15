#include<iostream>

using namespace std;

int main()
{
    double a,b,c;
    char opt;
    cin>>a;
    cin>>opt;
    cin>>b;
    if(opt=='+')
    c=a+b;
    if(opt=='-')
    c=a-b;
    if(opt=='/')
    c=a/b;
    if(opt=='*')
    c=a*b;
    cout<<c;
    
  return 0;  
}