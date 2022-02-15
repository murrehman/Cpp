#include<iostream>

using namespace std;

int main()
{
    int sp,pp,p,l;
    cout<<"Enter sale price=";
    cin>>sp;
    cout<<"Enter pp=";
    cin>>pp;
    if(sp>pp)
    {
        cout<<"profit=";
        p=sp-pp;
        cout<<p<<endl;

    }
    else
    {
        cout<<"Loss=";
        l=pp-sp;
        cout<<l;
    }
 return 0;   
}