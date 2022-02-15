#include <iostream>  
using namespace std;  
int main()  
{
    int x,y,z;
    int *p1,*p2,*p3;
    x=5;
    y=10;
    p1=&x;
    p2=&y;
    p3=&z;
    *p3=*p1+*p2;
    cout<<z<<endl;
    cout<<*&z<<endl;
    cout<<*p3<<endl;
    cout<<p3<<endl;
    cout<<&z;
    return 0;
}