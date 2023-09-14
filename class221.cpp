#include <iostream>
using namespace std;

class binary
{
private:
    string s;
    int a;
    void disp(void)
    {
        if (a == 1)
        {
            for (int i = 0; i < s.length(); i++)
            {
                cout << s.at(i);
            }
            cout << "\n";
        }
        else
        {
            return;
        }
    }
    
public:
    void read(void);
    void ones(void);
    
    void chk_bin(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                a = 0;
                break;
            }
            else
            {
                a = 1;
            }
        }
        if (a == 0)
        {
            cout << "NOT binary" << endl;
        }
        else
        {
            cout << "Binary" << endl;
        }
        ones();//nesting of on function into other function
        disp();
    }
} b, c;//class variables are declared with the class itself
//so we don't need binary b,c; type of declaratio in main function


void binary::read(void)
{
    cout << "enter a binary number:" << endl;
    cin >> s;
}

void binary::ones(void)
{
    if (a == 1)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else
            {
                s.at(i) = '0';
            }
        }
        cout << "the 1's complement of BINARY number:";
    }
    else
    {
        return;
    }
}




int main()//driver function
{
    b.read();
    b.chk_bin();//if we make chk_bin()private then we can't access it
    // b.ones();
    // b.disp();//if we make disp()private then we can't access it
    c.read();
    c.chk_bin();
    c.ones();
    // c.s;this throws an error because s is declared privately
    // c.disp();//if we make disp()private then we can't access it

    return 0;
}