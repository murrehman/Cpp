#include <iostream>  
using namespace std;  
int main()  
{
    int i,j;
    i=0;
    do
    {
        j=0;
        do
        {
          cout<<j;
          j++;
        }
        while (j<=10);
        cout<<endl;
        i++;
    } 
    while (i<=10);
    
   return 0; 
}