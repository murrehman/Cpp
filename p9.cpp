#include<iostream>

using namespace std;

int main()
{
    double en,ma,phy,ch,bio,tm;
    double p;
    cout<<"Enter marks of each subject"<<endl;
    cin>>en;
    cin>>ma;
    cin>>phy;
    cin>>ch;
    cin>>bio;
    tm=en+ma+phy+ch+bio;
    cout<<"total marks=";
    cout<<tm<<endl;
    cout<<"percentage=";
    p=tm/500*100;
    cout<<p<<endl;
    if(p>=80)
     cout<<"A";
    if(p>=70 && p<=79)
     cout<<"B";
    if (p>=60 && p<=69)
     cout<<"C";
    if (p<60)
     cout<<"F";
    
    
return 0;
}