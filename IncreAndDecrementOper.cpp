#include<iostream>
using namespace std;
int main()
{
    // *********Increment Operator**********
    int a=10;
    cout<<a++<<endl; //first the value print and than increment post increment
    cout<<a<<endl;

    cout<<++a<<endl;//first the value increment and than print pre increment
    cout<<a<<endl;

    // **********Decrement Operator***********

    int x=10;
    cout<<x--<<endl;
    cout<<x<<endl;

    cout<<--x<<endl;
    cout<<x;


    // **********Practice Ques**********

    cout<<"\n\n********\n";
    int a1,b1=1;
    a1=10;
    if(++a)
    {
        cout<<b1;
    }
    else{
        cout<<++b1;
    }

    cout<<endl;
    int a2=1;
    int b2=2;

    if(a2-- > 0 && ++b2 > 2){
        cout<<"if Statement";
    }
    else{
        cout<<"else statement\n";
    }
    cout<<a2<<" "<<b2<<endl;

    int a3=1;
    int b3=a3++;
    int c3=++a3;
    cout<<a3<<endl;
    cout<<b3<<endl;
    cout<<c3;
}