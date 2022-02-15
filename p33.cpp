#include <iostream>  
using namespace std;
int sum(int *ptr)
{
    int i;
    for(i=0;i<=2;i++)
    {
        *ptr=*ptr*2;
        ptr++;
    }
    return 0;
}


int main()  
{
    int x[3],i;
    cout<<endl;
    for(i=0;i<=2;i++)
    {
        cin>>x[i];
    }
    cout<<endl;
    sum(&x[0]);
    for(i=0;i<=2;i++)
    {
        cout<<"sum:";
        cout<<x[i]<<endl;
    }
    return 0;
}