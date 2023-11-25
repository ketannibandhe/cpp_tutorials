// #include<iostream>
// using namespace std;

// class complex{
//     int a;
//     int b;
//     public:
//     complex(void);//declaration of constructor
//     int num1(){
//         return a;
//     }
//     int num2(){
//         return b;
//     }
//     void printnum(){
//         cout<<"the complex number is :"<<a<<" + "<<b<<"i"<<endl;
//     }

// };
// complex::complex(void){
//     //constructor which does not take any parameters is called a default constructor

//     a=9;
//     b=5;
// }

// class Derived:public complex{
//     int number;
//     public:
//     void display(){
//         cout<<"value of a in complex class: "<<num1()<<endl;
//         cout<<"value of a in complex class: "<<num2()<<endl;
//     }
// };
// int main(){
//     complex c1,c2,c3;
//     c1.printnum();
//     Derived d;
//     d.display();
//     return 0;
// }


#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int,int);
    void printnum(){
        cout<<"the complex number is :"<<a<<" + "<<b<<"i"<<endl;
    }
};
    complex::complex(int x ,int y)//it is parameterized constructor
{
    a=x;
    b=y;
}
int main(){
    complex c1(3,4);//implict declaration
    c1.printnum();
    complex c2=complex(5,7);
    c2.printnum();
    
return 0;}
