// Inheritance

#include <iostream> 
 
using namespace std;  

class Big
{

protected:  unsigned int x,y,z;



public:
int input()
{
    cin>>x;
    cin>>y;
    return 0;
}


int count()
{
    z=x+y;
    return 0;
}

};
class small: public Big
{
    public:
    int show()
    {
        cout<<z;
        return 0;
    }
    
};

int main()
{
    small o1;
    o1.input();
    o1.count();
    o1.show();
    return 0;
}