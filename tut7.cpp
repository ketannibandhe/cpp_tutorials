#include<iostream>
using namespace std;
int c=90;
int main(){
    int a,b,c;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"Sum = "<<c<<endl;
    cout<<"The global C is "<<c<<endl;//this will still call the local C
    cout<<"The global C is "<<::c<<endl;
    //::(scope reolution)operator is used to call the global variable C
    return 0;
}