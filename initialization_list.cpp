#include <iostream>
using namespace std;

/*
syntax for initialization list in constructor:
constructor(argument-list):initialization-section

{
    assignment + other code;
}

class test{
    int a;
    int b;
    public:
    test(int i,int j):a(i), b(j){constructor-body}
};
*/

class test{
    int a;//note the sequece
    int b;
    public:
    test(int i,int j):a(i), b(j+i)
    {
        // b=j; inside the mai function is also allowed
        cout<<"constructor executed"<<endl;
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
    //b(2*j),b(a+j) are also valid because a is initialized before
    //a(i+b)is not valid because b is not initialized before
    //test(int i,int j):b(j),a(i+b) is also not valid because 
    //of the sequence of the declaration of the variables is different
};

int main() { 
    test t(8,9);
    return 0; }