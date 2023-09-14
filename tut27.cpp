#include <iostream>
using namespace std;
class complex; // forward declaration
class calculator
{
public:
    int add(int n1, int n2)
    {
        return (n1 + n2);
    }

    int sumreal(complex, complex);
    int sumcomplex(complex, complex);
};

class complex
{
    int a, b;
    friend int calculator::sumreal(complex, complex);
    friend int calculator::sumcomplex(complex, complex);
    friend class calculator;//to make entire class as friend

public:
    void setnum(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printnum(void)
    {
        cout << "The complex number: " << a << " + " << b << "i" << endl;
    }
};
int calculator::sumreal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2, o3;
    o1.setnum(1, 5);
    o1.printnum();

    o2.setnum(1, 7);
    o2.printnum();
    calculator calc;
    int res = calc.sumreal(o1, o2);
    int res2= calc.sumcomplex(o1,o2);
    cout << "The sum of real parts:" << res << endl;
    cout << "The sum of complex parts:" << res2 << endl;

    return 0;
}