// descending sorting

#include <iostream>  
using namespace std;  
int main()  
{
    int x[3],i,temp,j;
    for(i=0;i<=2;i++)
    {
        cin>>x[i];
    }
    for(i=0;i<=2;i++)
    {
        for(j=i+1;j<=2;j++)
        {
           if(x[i]>x[j])
           {
               temp=x[i];
               x[i]=x[j];
               x[j]=temp;
           }
        }
        cout<<x[i];
    }
}