#include<iostream>
using namespace std;

class Base1{
    public:
    int a=9;
    void setdata();
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
    // base_ptr->a=5;
    // base_ptr->b=5;//we cant do that 
    base_ptr->setdata();

    Derived1* dptr;
    dptr=&d1;
    dptr->setdata();
    dptr->b=90;//derived ptr->derived var
    dptr->setdata();
    dptr->a=60;//derived var->base var
    dptr->setdata();
    return 0;}

    //from the output we can see that 

    /*
    we can point Derived class object using Base1 class pointer
                          but 
    when we call a function in derived class using 
    pointer to derived class,it will call the same function from 
    Base class as the pointer is of the base class.
    */