#include<iostream>
using namespace std;
int main()
{
    // cout<<a<<endl;  // a was not declare in this scope

    // int a; 
    // cout<<a<<endl;  //gives garbage value because we do not assign the value

    // int a=3;
    // cout<<a<<endl;
    // if(true)
    // {
    //     cout<<a<<endl; // i can access the a
    // }

    int a=3;
    cout<<a<<endl;
    if(true)
    {
        int a=5;
        int b=2;
        cout<<a<<endl; // it will print 5
    }
    cout<<a<<endl; // it will print 3
//    ** cout<<b<<endl; // b was not declared in this scope

    int b=4;
    cout<<b<<endl;
    // int b=8;
    // cout<<b<<endl;// gives redeclaration error

    int i=8;

    for(int i=0;i<=8;i++) //explicitly create i so it uses this value of i
    {
        cout<<"Hi"<<endl;
    }

    cout<<"*************************";
    int i1=4;

    for( i1;i1<=8;i1++) //explicitly create i so it uses this value of i
    {
        cout<<"Hi"<<endl;
    }
    

    // if(1){
        // int b; /****this b valid for whole block */
        // if(1)
        // {
        //     // int b;  //*this b valid for this block */
        //     // if(1)
        //     // {
        //     //     int b;
        //     // }
        // }
      
    // }
}