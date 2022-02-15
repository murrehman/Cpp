// Multiple inheritance

#include <iostream>  
using namespace std;  

class A
{
    protected: int f;

    public:
    int sum(int a)
    {
        f=a;
        return 0;
    }
};
class B
{
    protected: int d;
    public:
    int cal( int c)
    {
        d=c;
        return 0;
    }
};

class D: public A, public B
{
    public:
    void show()
    {
        cout<<f<<endl;
        cout<<d<<endl;
        cout<<f+d;
    }
};



int main()  
{
    D o1;
    o1.sum(5);
    o1.cal(10);
    o1.show();

return 0;
}