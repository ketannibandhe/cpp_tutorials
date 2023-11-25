//virtual function used to overwrite the default behaviour of the pointer
#include<iostream>
using namespace std;
class Base1{
    public:
    int a=9;
    virtual void setdata();
};
void Base1::setdata(){
    cout<<"value of a in base class: "<<a<<endl;
}

class Derived1:public Base1{
    public:
    int b=900;
    void setdata();
};
void Derived1::setdata(){
    cout<<"value of b in Derived1 class :"<<b<<endl;
    cout<<"value of a in Derived1 class :"<<a<<endl;
}
int main(){
    Base1 b1;
    Base1 *base_ptr;
    Derived1 d1;
    base_ptr=&d1;
    base_ptr->setdata();
    return 0;}