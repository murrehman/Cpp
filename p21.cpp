#include <iostream>  
using namespace std;  
int main()  
{
    int x,n,t;
    x=1;
    cout<<"number=";
    cin>>n;
    do
    {
        t=n*x;
        cout<<n<<"*"<<x<<"="<<t<<endl;
        x++;
    } while (x<=10);
return 0;    
    
}