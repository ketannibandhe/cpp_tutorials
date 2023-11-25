#include<iostream>
#include<math.h>//or #include<cmath>
using namespace std;
class simple{
    protected:
    int a,b;
    public:
    void getnumbers(int num1,int num2){
        a=num1;
        b=num2;
    }
    void calculator1(){
        cout<<"Simple calculator\n"<<endl;
        cout<<a<<" + "<<b<<" : "<<a+b<<endl;
        cout<<a<<" - "<<b<<" : "<<a-b<<endl;
        cout<<a<<" * "<<b<<" : "<<a*b<<endl;
        cout<<a<<" / "<<b<<" : "<<a/b<<endl;
    }
};

class scientific{
    protected:
    int x,y;
    public:
    void getnumbers2(int n1,int n2);
    void calculator2();
};
void scientific::getnumbers2(int n1,int n2){
    x=n1;
    y=n2;
}
void scientific::calculator2(){
    cout<<"Scientific Calculator\n"<<endl;
    cout<<"Square root of "<<x<<" : "<<sqrt(x)<<endl;
    cout<<"square of "<<y<<" : "<<y*y<<endl;
    cout<<"Cos "<<x<<":"<<cos(x)<<endl;
}

class compute:public simple,public scientific{
    public:
    void calc();
};
void compute::calc(){
    calculator1();
    calculator2();
}
int main(){
    compute operation;
    operation.getnumbers(10,5);
    operation.getnumbers2(90,90);
    operation.calc();
    // operation.calculator1();
    // operation.calculator2();
    
    return 0;}