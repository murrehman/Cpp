#include <iostream>  
using namespace std;  
int main()  
{
    int list1[3], list2[3],temp,i;
    cout<<"Enter 10 values in list 1:"<<endl;
    for(i=0;i<=2;i++)
    {
        cin>>list1[i];
    }
    cout<<"Enter 10 values in list 2:"<<endl;
    for(i=0;i<=2;i++)
    {
        cin>>list2[i];
    }
    cout<<endl;
    for(i=0;i<=2;i++)
    {
        temp=list1[i];
        list1[i]=list2[i];
        list2[i]=temp;
    }
    cout<<"List 1=";
    for(i=0;i<=2;i++)
    {  
        cout<<list1[i];
   
    }
    cout<<endl;
    cout<<"List 2=";
    for(i=0;i<=2;i++)
    {
        cout<<list2[i];
    }
    
    return 0;

}