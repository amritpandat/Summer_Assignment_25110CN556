#include<iostream>
using namespace std;
int main()
{
    int num,a,product=1;
    cout<<"Enter the number:";
    cin>>num;
    while (num!=0)
    {
        a=num%10;
        product=product*a;
        num=num/10;
    }
    cout<<"Product of digits in number is:"<<product;
}