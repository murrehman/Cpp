#include<iostream>

using namespace std;

int main()
{
    int cy,jy,sy;
    cout<<"Join=";
    cin>>jy;
    cout<<"current=";
    cin>>cy;
    sy=cy-jy;
    if(sy>15)
    {
        cout<<"10,000 bonus";
    }
    else 
    {
        if(sy>10)
        {
            cout<<"7k bonus";
        }
        else
        {
            if(sy>7)
            {
                cout<<"6k bonus";
            }
            else
            {
             if(sy>4)
             {
                 cout<<"5000 bonus";
             }
             else
             {
                 if(sy<4)
                 {
                     cout<<"3000 bonus";
                 }
             }
            }
            
        }
        
    }
return 0;
}