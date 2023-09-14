// passing objects to the fuction
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setnum(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void getnumbysum(complex o1, complex o2)
    // here we have passed function objects as arguments
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnum(void)
    {
        cout << "The complex number: " << a << " + i" << b << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setnum(1, 3);
    c1.printnum();
    c2.setnum(2, 4);
    c2.printnum();
    c3.getnumbysum(c1, c2);
    c3.printnum();
    return 0;
}