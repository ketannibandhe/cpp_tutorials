#include<iostream>
using namespace std;
class c2;
class c1{
    int a;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int x){
        a=x;
    }
    void printdata(void){
        cout<<"the value of a :"<<a<<endl;
    }
};
class c2{
    int b;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int x){
        b=x;
    }
    void printdata(void){
        cout<<"the value of b :"<<b<<endl;
    }
};

void exchange(c1 &num1, c2 &num2){
    int temp=num1.a;
    num1.a=num2.b;
    num2.b=temp;

}
int main(){
    c1 num1;
    num1.indata(8);
    num1.printdata();

    c2 num2;
    num2.indata(6);
    num2.printdata();

    exchange(num1,num2);
    num1.printdata();
    num2.printdata();

    
    return 0;}