#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++)
    {
        int nextno=a+b;
        cout<<nextno;
        a=b;
        b=nextno;
    }

}