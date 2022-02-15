#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

int findMax(vector<int> x = vector<int>())
{
    int max=0;

    for(unsigned int i = 1; i < x.size(); i++)
    {
        if(x[i] > max)
        {
           max = x[i];
        }
    }
    
    return max;
}

    
int main()
{
    cout << "max: " << findMax() << endl; // without argument
    
}

