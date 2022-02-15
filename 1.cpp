#include<iostream>
#include<vector>

using namespace std;

int findMax(vector<int> x)
{ 
 int max= 0;
	for(int i=0; i<x.size() ;i++)
  {
    if(x[i]>max)
    {
      max=x[i];
      
	}  
 }
 cout<<max;	
 return 0;	
}

int main()
{
    vector<int> x;

    findMax(x);
    return 0;
}