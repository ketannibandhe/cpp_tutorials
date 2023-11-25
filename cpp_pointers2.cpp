#include <iostream>
using namespace std;
class complex_no
{
    int real, imaginary;

public:
    void setdata(int a, int b);
    void printdata();
};
void complex_no::setdata(int a, int b)
{
    real = a;
    imaginary = b;
    cout << a << " + " << b << "i" << endl;
}
void complex_no::printdata()
{
    cout << "Real part of complex number: " << real << endl;
    cout << "Complex part of complex number : " << imaginary << endl;
}
int main()
{
    complex_no c;
    complex_no *ptr=&c;
    //complex_no *ptr = new complex_no
    //"new" operator creates NEW object.                          

    cout << "Enter the complex number" << endl;
    (*ptr).setdata(12, 20);
    ptr->printdata();
    //->shows derefernce the pointer and run corresponding function
    //OR (*ptr).printdata();
    return 0;
    //. operator has higher precedence over *operator so ()is necessary.
}