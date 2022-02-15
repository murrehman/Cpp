#include<iostream>

using namespace std;

int main()
{
    int tsp,tp,tcp;
    float cp;

    cout<<"tsp=";
    cin>>tsp;
    cout<<"tp=";
    cin>>tp;
    cout<<"tcp=";
    tcp= tsp-tp;
    cout<<tcp<<endl;
    cout<<"cp=";
    cp=tcp/15;
    cout<<cp;

    return 0;


}