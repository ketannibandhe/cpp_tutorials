#include<iostream>
using namespace std;
template <class T>

void display(T var){
    cout<<var<<endl;
    cout<<sizeof(var)<<endl;
}
int main(){
    int a=10;
    float b=9.34;
    char ch='s';
    display(a);
    display(b);
    display(ch);
    return 0;
}