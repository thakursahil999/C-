#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter A number:";
    cin>>n;
    int ones=0;
    int zeroes=0;
    while(n!=0){
        if(n&1)
        {
            ones++;
        }
        else{
            zeroes++;
        }
        n=n>>1;
    }
    cout<<"The Number of Ones :"<<ones<<endl;
    cout<<"The Numbe of Zeroes :"<<zeroes<<endl;

}
