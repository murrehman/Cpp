#include <iostream>  

using namespace std; 

int main()  
{
   char a[10], b[10];
   int c,i,n;
   gets(a);
   gets(b);
   cin>>n;
   for(i=0;a[i]!='\0' && i!=n;i++)
   {
       if(a[i]!=b[i])
       {
           c=1;
       }
       else
       {
           c=0;
       }
    }

    if(c==0)
    {
      cout<<"Match";
    }
    
    else
    {
        cout<<"NO MATCH";
    }
    return 0;
    
}