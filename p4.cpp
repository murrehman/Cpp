#include<iostream>

using namespace std;

int main()
{
    int items;
    cout<<"Enter number of items=";
    cin>>items;
    if(items>1000)
    {
        cout<<"discount offered.";
    }
    else 
    {
        cout<<"Discount not available.";
    }
    return 0;
}