#include <iostream>
using namespace std;
class complex
{
    int a, b;
    friend complex sumcomplex(complex, complex);

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

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnum((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, c3;
    c1.setnum(1, 3);
    c1.printnum();
    c2.setnum(2, 4);
    c2.printnum();
    c3 = sumcomplex(c1, c2);
    c3.printnum();
    return 0;
}

