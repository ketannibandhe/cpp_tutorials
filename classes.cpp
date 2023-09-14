#include<iostream>
using namespace std;
//in cpp we don't need to use typedef 
//data hiding is not possible in structures
//structure is not useful for private or secure work
//syntax:->class (keyword) classname(variable) argumets;
class Employee{
    //we have made a class datatype (similar to the structure in C)
    //two types of data in class private or public
    private://private data cannot be accessed from outside
        int a=70,b,c;
    public:
        int d,e;
        void setdata(int b1,int c1);//function declaration
        void getdata(){//function defination
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
        /*we can either just declare the function in class 
        and then define it outside the class 
        or 
        define the function in the class itself
        */
} ;
void Employee ::setdata(int b1,int c1){
//syntax for defining a function outside the class which is declared inside function
    b=b1;
    c=c1;

}
int main(){
    Employee harry;
    //harry.a=90;we cannot access a as harry.a because it is declared privately
    harry.d=10;
    harry.e=11;
    harry.setdata(1,2);
    harry.getdata();   
    return 0;
    }