#include<iostream>
using namespace std;
int main()
{
    int num,a,sum=0;
    cout<<"Enter the number:";
    cin>>num;
    while (num!=0)
    {
        a=num%10;
        sum=sum+a;
        num=num/10;
    }
    cout<<"sum of digits in number is:"<<sum;
}