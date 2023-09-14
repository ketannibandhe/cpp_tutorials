#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
    complex(void);//declaration of constructor
    void printnum(){
        cout<<"the complex number is :"<<a<<" + "<<b<<"i"<<endl;
    }

};
complex::complex(void){
    //constructor which does not take any parameters is called a default constructor

    a=9;
    b=5;
}
int main(){
    complex c1,c2,c3;
    c1.printnum();
    
    return 0;

}
//constructur should be declared in public section of the class
/*they are automatically invoked whenever the object is created
they cannot return values and they donot have a return types 
we cannot refer to their address*/