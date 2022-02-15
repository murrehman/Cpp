// Searching location of item

#include <iostream>  
using namespace std;  
int main()  
{
    int x[3],item,i,loc=0;
    for(i=0;i<=2;i++)
    {
        cin>>x[i];
    }
    cout<<"enter item:";
    cin>>item;
    for(i=0;i<=2;i++)
    {
        if(x[i]==item)
        {
            cout<<"loc="<<i<<endl;
            loc++;
            
        }
    }
    if(loc==0)
    cout<<"Error";
    return 0;
}