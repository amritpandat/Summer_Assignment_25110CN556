#include<iostream>
using namespace std;
int main()
{
    int num,a,rev=0,b;
    cout<<"Enter the number:";
    cin>>num;
    b=num;
    while (num!=0)
    {
        a=num%10;
        rev=rev*10+a;
        num=num/10;
    }
    cout<<"Reverse of number is:"<<rev<<endl;
    if(rev==b)
    {
        cout<<"Number is palindrome";
    }
    else
    {
        cout<<"Number is not palindrome";
    }
}