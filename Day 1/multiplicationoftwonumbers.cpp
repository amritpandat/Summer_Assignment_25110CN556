#include<iostream>
using namespace std;
int main()
{
    int n,i,table;
    cout<<"Enter no. whose table is to be printed:";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        table=n*i;
    cout<<table<<endl;
    }
};