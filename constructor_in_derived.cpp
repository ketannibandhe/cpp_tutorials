#include<iostream>
using namespace std;

class base1{
    int a;
    public:
    base1(int o1){
        a=o1;
        cout<<"base1 constructor is called"<<endl;
    }
    void printdata1(void){
        cout<<"the value of data1 is "<<a<<endl;
    }
};

class base2{
    int b;
    public:
    base2(int o2){
        b=o2;
        cout<<"base2 constructor is called"<<endl;
    }
    void printdata2(void){
        cout<<"the value of data2 is "<<b<<endl;
    }
};

class derived1:public base2,public base1{
    int d1,d2;
    public:
    derived1(int n1,int n2,int n3,int n4):base2(n3),base1(n1){
        d1=n2;
        d2=n4;
        cout<<"derived class constructor is called"<<endl;
    }
    void printdata(){
        cout<<"the value of derived1 is"<<d1<<endl;
        cout<<"the value of derived2 is"<<d2<<endl;
    }
};
int main(){
    derived1 obj1(1,2,3,4);
    obj1.printdata1();
    obj1.printdata2();
    obj1.printdata();
    return 0;
}