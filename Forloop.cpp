#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<i<<endl;
    }

    int x;
    cout<<"Enter The value upto which you check the Even or Odd:";
    cin>>x;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<"The Number is Even:"<<i<<endl;
        }
        else{
            cout<<"The Number is Odd:"<<i<<endl;
        }
    }

    for(int a1=0,b1=0; a1<=12,b1<=12;a1++,b1++)
    {
        cout<<a1 << " "<<b1<<endl;
    }
}