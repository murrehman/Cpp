#include <iostream>  
using namespace std;

struct student
{
    char name[15], fname[15];
    int rollno;
};

int main()  
{
    student a,b;

    cin>>a.name;
    cin>>a.fname;
    cin>>b.name;
    cin>>b.fname;
    
    cin>>a.rollno;
    cin>>b.rollno;
    cout<<a.rollno<<endl;
    cout<<a.name<<endl;
    cout<<a.fname<<endl;
    cout<<b.rollno<<endl;
    cout<<b.name<<endl;
    cout<<b.fname<<endl;
    
return 0;
}