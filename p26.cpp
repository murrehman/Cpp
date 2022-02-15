#include <iostream>  
using namespace std; 

int sum(int x,int y)
{
    int c;
    c=x+y;
    cout<<"sum=";
    cout<<c<<endl;
    return 0;
}

int sub(int x ,int y)
{
    int c;
    c=x-y;
    cout<<"sub=";
    cout<<c;
    return 0;
}

int main()  
{
    int x, y;
    cout<<endl<<endl<<endl;
    cin>>x;
    cin>>y;
    sum(x,y);
    sub(x,y);
    return 0;
} 
