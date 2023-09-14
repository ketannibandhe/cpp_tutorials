//pointers in cpp
#include<iostream>
using namespace std;
int main(){
    int a=9;
    int *b;
    b=&a;
    cout<<"address of a is"<<&a<<endl;
    cout<<"address of b is"<<b<<endl;
    cout<<"value at address b (&b) is"<<*b<<endl;
    
    return 0;}