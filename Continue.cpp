#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout<<"Hello\n";
            continue; // Skip the statement below it
            cout<<"Odd Number";
        }
        else
        {
            cout<<i<<endl;
        }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            cout<<i<<" "<<j<<endl;
        }
    }

}