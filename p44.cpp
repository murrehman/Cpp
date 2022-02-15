// descending sorting

#include <iostream>  
using namespace std; 

int sort(int x3[5])
{
    int temp,j;
    for(int i=0;i<=5;i++)
    {
        for(j=i+1;j<=5;j++)
        {
           if(x3[i]>x3[j])
           {
               temp=x3[i];
               x3[i]=x3[j];
               x3[j]=temp;
           }
        }
        
    }
    return 0;
}

int main()  
{
    int x1[3]={2, 7, 5}, x2[3]={3, 38, 4},x3[3],temp,k=0;
    for(int i=0;i<=2;i++)
    {
        if(i>2)
        {
            x3[i]=x2[k];
            k++;
        }
        else
            x3[i]=x1[i];
    }

    sort(x3);
    for(int i=0;i<=5;i++)
    {
        cout<<x3[i];
    }
    return 0;
    
}















