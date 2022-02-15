#include<iostream>

using namespace std;

int main()
{
    int items,tp, price,d;

    cout<<"Enter quantity of items=";
    cin>>items;
    cout<<"Enter price of each item=";
    cin>>price;
    tp=items*price;
    if(items>1000)
    {
        d=tp/100*10;
        cout<<"total price=";
        cout<<tp<<endl;
    cout<<"10% DISCOUNT=";
    cout<<d;
    }
    else 
    {
        cout<<"total price=";
        cout<<tp<<endl;
        cout<<"No Discount";
    }
    
    return 0;
}