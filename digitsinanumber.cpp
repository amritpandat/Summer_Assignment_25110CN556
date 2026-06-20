#include<iostream>
using namespace std;
int main()
{
    int num,a,count=0;
    cout<<"Enter the number:";
    cin>>num;
    while (num!=0)
    {
        a=num%10;
        count=count+1;
        num=num/10;
    }
    cout<<"No. of digits in number are:"<<count;
}