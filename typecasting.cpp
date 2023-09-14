#include<iostream>
using namespace std;
int main()
{
    // char c=76;//here note that we are storing integer in char variable
    // //then it will give the output as character whose asciivalue is that no. 
    // char d=567;
    // int e='A';
    // cout<<d<<"\n";
    // cout<<e<<"\n";//here 'A' is typecasted into int
    // cout<<c;


    int a=45;
    float b=45.89;
    int c=(int)b;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of a is "<<(float)a<<"\n";
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<c<<endl;
    cout<<"the expression is "<<a+b<<endl;
    cout<<"the expression is "<<a+(int)b<<endl;
    cout<<"the expression is "<<a+int(b)<<endl;
    return 0;
}