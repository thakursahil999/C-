#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    int sum=0;
    int product =1;
    while(n!=0)
    {
        int digit=n%10;
        sum+=digit;
        product*=digit;
        n=n/10;
    }
    cout<<sum<<endl;
    cout<<product<<endl;

    cout<<"Result="<<product-sum;
    
    
}
