#include <iostream>
#include<string.h>

using namespace std;

struct student 
{
    char name[20], parent[10];
    int rollno;
};

int main()  
{
    student N[3];

    for(int i=1;i<=3;i++)
    {
        cin>>N[i].rollno;
        cin>>N[i].name;
        cin>>N[i].parent;
        cout<<"next:";
        
    }

    for(int i=1;i<=3;i++)
    {
        cout<<N[i].rollno;
        cout<<N[i].name;
        cout<<N[i].parent;
        cout<<endl;
    }
    
}