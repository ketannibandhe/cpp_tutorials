#include <iostream>
using namespace std;


/*order of execution of constructor
class B:class A
A->B
class B:public A,public C;
A->C->B
class B:public A,virtual public C;
C->A->B
*/
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Constructor in base1 is called" << endl;
    }
    void printdata1(void)
    {
        cout << "value of Data1: " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int j)
    {
        data2 = j;
        cout << "Constructor in base2 is called" << endl;
    }
    void printdata2(void)
    {
        cout << "Data2: " << data2 << endl;
    }
};
class Derived :public base1,public base2{
    int data3,data4;
    public:
    Derived(int a,int b,int c,int d):base1(a),base2(d){
        data3=c;
        data4=b;
        cout<<"derived class constructor is called"<<endl;
    }
    void printdata(){
        cout<<"derived data3: "<<data3<<endl;
        cout<<"derived data4: "<<data4<<endl;
        
    }
};
int main()
{
    Derived d1(1,2,3,4);
    /*Note the sequence of the constructors called 
      it will be base1-->base2-->Derived as per the declaration*/
    d1.printdata1();
    d1.printdata2();
    d1.printdata();
    //note the order of constructor execution in console
    //after running the programme. and compare it with the declaration.
    return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     cout<<s;

//     return 0;}

