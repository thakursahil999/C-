#include<iostream>
using namespace std;
int main()
{
    cout<<"***********Check the Number is Even or Odd**********";
    int a;
    cout<<"\nEnter the Number You want to Check Even or Odd:";
    cin>>a;
    if(a%2==0)
    {
        cout<<a<<" is Even Number.";
    }
    else
    {
        cout<<a<<" is Odd number.";
    }
}