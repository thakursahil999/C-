#include<iostream>
using namespace std;
int main()
{
    cout<<"************ADD and SUBTRACT*************\n";
    char ch;
    cout<<"\nWhat You Want to Do:(for addition 'A' and for Subtraction 'S'):";
    cin>>ch;
    float a,b;
    cout<<"\nEnter First Value:";
    cin>>a;
    cout<<"Enter Second Value:";
    cin>>b;
    if(ch=='A')
    {
        cout<<"Addition of "<<a<<" and "<<b<<" is:"<<a+b;
    }
    else if(ch=='S')
    {
        cout<<"Subtraction of "<<a<<" and "<<b<< " is:"<<a-b;
    }
    else
    {
        cout<<"Choice Doesn't Match...";
    }
    return 0;
}