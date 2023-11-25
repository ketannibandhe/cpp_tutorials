#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
    complex(void);//declaration of constructor
    complex(int n);
    complex(int num1,int num2);
    void printnum(){
        cout<<"the complex number is :"<<a<<" + "<<b<<"i"<<endl;
    }

};
complex::complex(void){
    //constructor which does not take any parameters is called a default constructor

    a=9;
    b=5;
}
complex::complex(int n){
    a=n;
    b=19;
}
complex::complex(int num1,int num2){
    a=num1;
    b=num2;
}
int main(){
    complex c1,c2(5),c3(12,13);
    c1.printnum();
    c2.printnum();
    c3.printnum();
    return 0;

}
//constructur should be declared in public section of the class
/*they are automatically invoked whenever the object is created
they cannot return values and they donot have a return types 
we cannot refer to their address*/