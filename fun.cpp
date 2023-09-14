#include<iostream>
using namespace std;
int sum1(int num1,int num2);//function declaration

int main(){
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a;
    cin>>b;
    cout<<"Sum:"<<sum1(a,b)<<endl;//function call
    //a and b are actual parameters
    return 0;
}

int sum1(int num1,int num2)//function defination
//num1 and num2 are formal parameters
{
    int sum=num1+num2;
    return sum;
}