#include<iostream>
using namespace std;
int main()
{
    // ******AND operator*******
    int a=2;
    int b=3;
    int c=a&b;
    cout<<c;
    cout<<endl;
//    ********OR Operator******
    int x=2;
    int y=3;
    int z=2 | 3;
    cout<<z;
    cout<<endl;

    // ********NOT operator********

    int p=3;
    int q=~p;
    cout<<q;
    cout<<endl;

    // *****XOR Operator*****

    int n=2;
    int m=4;
    int nm=n^m;
    cout<<nm;
    cout<<endl;
}