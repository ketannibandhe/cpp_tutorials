//c++-->inititally called as c with classes by stroustroup
    //classes-->extension of structures ie ***structure+more
    //structures had limitations
    //            -->members are public
    //            -->no methods ie we can't add functions inside the structure
    //classes can have methods(functions) and properties(values)
    //classes can make few members as private &few as public
    //in c++ structures names can be shortened without typedef
    //you can declare objects along with the class declaration
        // class employee{
        //     //class defination
        // }harry,rohan,lovesh;***************************valid syntax
    //harry.slary=8 makes no sence if salary is private


// nesting of member functions
#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    
    void ones(void);
    void disp(void);
};

void binary ::read(void)
{
    cout << "enter a binary number" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "invalid binary number" << endl;
            exit(0);
        };
    }
}

void binary ::ones(void)
{ // 1's compliment of binary number

//***********************************************************************
chk_bin();// nesting of member functions
/*
here we don't need
void binary ::chk_bin(void)
*/
//***********************************************************************
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary ::disp(void)
{
    cout << "displaying the the given binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
// driver program
int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.disp();
    b.ones();
    b.disp();
    return 0;
}