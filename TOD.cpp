#include <iostream>  
using namespace std; 

 float priceCalc(float bP, float dbP, int nEx, float exP)
 {
    float z,y, x, p;
    if(dbP > 25)
    {
        return 0;
    }
    x = bP/dbP;
    y = bP - x;
     
    if (nEx <= 3)
    {
        z = exP;
    } else if (nEx > 3 && nEx < 5)
    {
        p = exP/10;
        z = exP - p;
    } else if (nEx > 5)
    {
        p = exP/100)*15;
        z = exP - p;
    }
     return y + z;
 }

int main()  
{
    float bP, dbP, exP;
    int nEx;
    cin>>bP>>dbP>>nEx>>exP;
    float a = priceCalc(bP, dbP, nEx, exP);
    cout<<a;

} 