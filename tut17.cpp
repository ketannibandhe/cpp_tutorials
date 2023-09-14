//inline functions L 17 imp lect...............................................
/*
it is used to reduce the long process for the execution of smalltask functions
in the in line functions compiler replaces the function call with functionCODE
in the compile time .
concept of static variables in L17.
*/
#include<iostream>
using namespace std;

inline int prod(int num1,int num2);

int main(){
    int a,b;
    cout<<"Enter the two numbers:"<<endl;
    cin>>a>>b;
    cout<<"The product of the two numbers is :"<<prod(a,b)<<endl;   
    return 0;
    }

int prod(int num1,int num2){
    return num1*num2;
}