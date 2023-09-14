#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    float d=34.4;
    long double e=34.4;
    34.4f;
    cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;
    cout<<"type of d is "<<typeid(d).name()<<endl;
    cout<<"type of e is "<<typeid(e).name()<<endl;
//*************************reference variables*******************************//
//rohan-->monty-->rohu-->dangerous coder
    float var1=9;
    float &var2=var1;
    cout<<var1<<endl;
    cout<<var2<<endl;
    

    return 0;

}