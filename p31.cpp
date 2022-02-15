// Finding smallest value in array

#include <iostream>  
using namespace std;  
int main()  
{
    int x[3],i,small;
    for(i=0;i<=2;i++)
    {
        cin>>x[i];
    }
    small=x[0];
    for(i=0;i<=2;i++)
    {
        if(x[i]<small)
        {
            small=x[i];
        }
    }
    cout<<small;
    return 0;
}