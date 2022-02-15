// POLYMORPHISM

#include <iostream>  
using namespace std; 

class A
{
    protected: int a,b,c;
    public:
    int sum(int x, int y)
    {
        a=x;
        b=y;
        cout<<a<<" "<<b;
        return 0;
    }

    int sum(int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
        cout<<a<<"  "<<b<<"  "<<c;
        return 0;
    }
};


int main() 
{
    A ob;
    ob.sum(10,12);
    ob.sum(11,12,13);
    return 0;
} 