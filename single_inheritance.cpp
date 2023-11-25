// #include <iostream>
// using namespace std;
// class Base
// {
//     int data1 = 70;

// public:
//     int data2;
//     void setdata();
//     int getdata1();
//     int getdata2();
// };
// void Base::setdata()
// {
//     data1 = 90;
//     data2 = 100;
// }
// int Base::getdata1()
// {
//     return data1;
// }
// int Base::getdata2()
// {
//     return data2;
// }

// class Derived : public Base
// {
//     int data3;

// public:
//     int process();
//     void display();
// };
// int Derived::process()
// {
//     data3 = data2 * getdata1();
//     return data3;
// }
// void Derived::display(){
//     cout<<"data1:"<<getdata1()<<endl;
//     cout<<"data2:"<<data2<<endl;
//     cout<<"data3:"<<data3<<endl;
// }

// int main()
// {
//     Derived d1;
//     d1.setdata();//public function from base class
//     // d1.getdata1();
//     // d1.getdata2();
//     d1.process();//public function from derived class
//     d1.display();//public function from derived class
//     return 0;
// }


#include <iostream>
using namespace std;
class Base
{
    int data1 = 70;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base::setdata()
{
    // data1 = 90;
    data2 = 100;
}
int Base::getdata1()
{
    return data1;
}
int Base::getdata2()
{
    return data2;
}

class Derived : private Base//remember the syntax
{
    int data3;
    // public:
    // int data2;
    // void setdata();
    // int getdata1();
    // int getdata2();

    public:
        int process();
        void display();
};
int Derived::process()
{
    setdata();
    /*public variable from base class became private variable 
    of the derived class so it is accessed in the public function*/
    data3 = data2 * getdata1();
    return data3;
}
void Derived::display(){
    cout<<"data1:"<<getdata1()<<endl;
    cout<<"data2:"<<data2<<endl;//data2 derived publically from base class
    cout<<"data3:"<<data3<<endl;//data3 is public member of derived class
}

int main()
{
    Derived d1;
    d1.process();//public function from derived class
    d1.display();//public function from derived class
    return 0;
}