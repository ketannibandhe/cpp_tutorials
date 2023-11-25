#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int x, int y)
    {
        return (x + y);
    }

    int sumreal(complex, complex);
    int sumcomp(complex,complex);
};

class complex
{
    int a, b;

public:
    void setnumber(int, int);
    void displaynum();

    //declaring individual functions as a friend
    // friend int calculator::sumreal(complex, complex);
    // friend int calculator::sumcomp(complex, complex);

    //aliter:
    //declaring entire class as a friend
    friend class calculator;

};
void complex::setnumber(int num1, int num2)
{
    a = num1;
    b = num2;
}
void complex::displaynum()
{
    cout << "Complex number: " << a << " + " << b << "i" << endl;
}

int calculator::sumreal(complex o1, complex o2)
{
    // cout << "Sum of real parts :";
    return o1.a + o2.a;
}

int calculator::sumcomp(complex o1, complex o2)
{
 
    return o1.b + o2.b;
}

int main()
{
    complex c1, c2;
    c1.setnumber(1, 4);
    c1.displaynum();
    c2.setnumber(2, 5);
    c2.displaynum();

    calculator sum;
    int real_part = sum.sumreal(c1, c2);
    cout << "The sum of real parts :" << real_part<<endl;
    int complex_part = sum.sumcomp(c1, c2);
    cout << "The sum of complex parts :" << complex_part<<endl;
    return 0;
}