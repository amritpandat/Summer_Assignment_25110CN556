#include<iostream>
using namespace std;
int main()
{
    int num,a,rev=0;
    cout<<"Enter the number:";
    cin>>num;
    while (num!=0)
    {
        a=num%10;
        rev=rev*10+a;
        num=num/10;
    }
    cout<<"Reverse of number is:"<<rev;
}