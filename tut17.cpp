// Inline functions L 17 imp lect...............................................
/*
It is used to reduce the long process for the execution of smalltask functions.
In the in line functions compiler replaces the function call with functionCODE
in the compile time .
concept of static variables in L17.

Making a function inline is a request to the cmpiler, it is 
upto compiler to accept the request or reject it.
*/
#include <iostream>
using namespace std;

// inline int prod(int num1,int num2);

// int main(){
//     int a,b;
//     cout<<"Enter the two numbers:"<<endl;
//     cin>>a>>b;
//     cout<<"The product of the two numbers is :"<<prod(a,b)<<endl;
//     return 0;
//     }

// int prod(int num1,int num2){
//     return num1*num2;
// }

float moneyreceived(int money, float factor = 1.04)//1.04 default argument
{
    return money * factor;
}
int main()
{
    int a = 200;
    cout << "For a VIP: Money returned will be:" << moneyreceived(a) << endl;
    cout << "General money recieved will be:" << moneyreceived(a, 1.01) << endl;
}