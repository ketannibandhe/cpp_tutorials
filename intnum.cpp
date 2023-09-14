#include<iostream>
using namespace std;
int main()
{
    int num =10;
    // here if we take int cout =10 then compiler will get confused
    // between two cout commands
    // and will give error
    cout<<num;
}