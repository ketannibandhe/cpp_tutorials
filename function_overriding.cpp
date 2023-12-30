#include<iostream>
using namespace std;

class A{
    public:
    void display(){
        cout<<"You are inside the base class:\n";
    }
};

class B:public A{
    public:
    void display(){
        cout<<"inside the derived class:\n";
        // A::display();
    }
};

int main(){
    B aa;
    // aa.display();
    aa.A::display();
    
    return 0;}