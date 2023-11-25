#include<iostream>
using namespace std;
class BaseClass{
    public:
    int var1;
    void displaydata(){
        cout<<"THe value of var1 in BaseClass :"<<var1;
    }
};
class DerivedClass:public BaseClass{
    public:
    int var_derived;
    void displaydata(){
        cout<<"Displaying base class variable:"<<var1<<endl;
        cout<<"DIsplaying derived class variable: "<<var_derived<<endl;
    }
};
int main(){
    BaseClass b;
    BaseClass* base_pointer;
    DerivedClass d;
    DerivedClass* derived_pointer;
    base_pointer = &d;
    base_pointer->var1=90;
    // base_pointer->var_derived=890;//this will throw an error
    base_pointer->displaydata();
    derived_pointer->var1=1000;
    derived_pointer->displaydata();
    derived_pointer->var_derived=890;
    derived_pointer->displaydata();

    /*
    base class pointer can point to the derived class object(its address)
    it is valid in cpp
    but if we call the display function 
    then it will call the disply function of the base class
    and not the derived class because pointer is of the base class
    thats call late binding
    */
    return 0;}