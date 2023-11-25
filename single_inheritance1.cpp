#include<iostream>
using namespace std;

class Base{
    int num1;
    public:
    int getdata1(int);
    void setdata();
};
int Base::getdata1(int n){
    num1=n;
    return n;
}

void Base::setdata(){
    cout<<"value of num1 from Base class :"<<num1<<endl;
}

class Derived:private Base{
    int num2;
    public:
    void setdata(){
        num2=100;
    }
    int returndata(){
        return num2;
    }
    void sum();

};
void Derived::sum(){

    int total=getdata1(10)+returndata();
    cout<<total;
}

int main(){
    Derived d;
    d.setdata();
    d.sum();
    return 0;}