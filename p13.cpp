#include<iostream>

using namespace std;

int main()
{
    double a,b,c;
    char opt;
    cin>>a;
    cin>>opt;
    cin>>b;
    switch(opt)
    {
    case '+':
    c=a+b;
    break;
    case '-':
    c=a-b;
    break;
    case '*':
    c=a*b;
    break;
    case '/':
    c=a/b;
    }
    cout<<c;
    return 0;
}