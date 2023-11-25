#include <iostream>
using namespace std;
class base1
{
public:
    void greet();
};
void base1::greet()
{
    cout << "Hello all" << endl;
}

class base2
{
public:
    void greet();
};

void base2::greet()
{
    cout << "Namaste all" << endl;
}
// class Derived:public base1,public base2{
//     public:
//     void greet()
//     /*This function is used to decide which greet function is to be used*/
//     {
//         base2::greet();
//     }
// };

class Derived : public base1, public base2
{
public:
    void greet()
    {
        cout << "Let's study Inheritance." << endl;
        /*Note here that as here the same greet function like in base class
        is defined ,the compilr will prefer the greet in deried class first
        In short the derived class will overwrite the inherited function.*/
    }
};
int main()
{
    Derived d1;
    d1.greet();
    return 0;
}