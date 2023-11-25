/*
this pointer points to the object which has called member function 
here in this program this pointer called object 'a' made in main function
that object 'a' has called member function setdata.
*/
#include <iostream>
using namespace std;

class A
{
    int a;
public:
    A& setdata(int a);//**********************************************
    void printdata();
};
A& A:: setdata(int a)//************************************************
{
    this->a = a;
    //here the names of arguments and class variables are same i.e 'a'
    //a=a; also try to run using this syntax
    //if we want to return a then we can do so using this.
    return *this;
}
void A::printdata()
{
    cout << "The value at a is " << a << endl;
}
    /*
    'this' is a keyword which is a pointer which points to the object
     which invokes the member function
     this represents(represents) the object 
     which has called that member function.
     Here "a"     is an object which has called the member functions
     setdata and printdata
    */

int main()
{
    A a;
    a.setdata(4).printdata();
    //here " a.setdata(4) " has returned an object

    // a.printdata();
    return 0;
}