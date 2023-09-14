#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2);
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    //cout<<a;is meaningless as it should be linked with the object
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setnumber(1, 4);
    c2.setnumber(4, 6);
    c1.printnumber();
    // c1.complex is invalid
    sum = sumcomplex(c1, c2);
    sum.printnumber();

    return 0;
}
/*
friend function doesn't become a part of class though it is declared inside the
class
friend function is not in the scope of the class,
it cannot be called as a function of that class
it usually contains the arguments as objects.
can bedeclared in the public or private part of the class
to access any member it needs object name.function
*/