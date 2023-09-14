#include<iostream>
using namespace std;
int main()
{
    int cout=0;
    cout<<cout;
    // nothing will be printed because compiler will get confused between 
    // two cout commands and it will not recognize cout<< command
    // for printing the message so for that namespace std is used 
    std::cout<<cout;
    // now after adding std:: the compiler will now recognize that this
    // cout is from namespace std library 
}