//there are two types of header files
/*system header files:it comes with the compiler*/
#include<iostream> 
/*user defined header files: It is written by compiler
here we have created the file this.h */
//#include "this.h"
//it will produce an error if this.h is not present in the current directory

using namespace std;
int main(){
    int a=9,b=29;
    cout<<"operators in c++"<<endl;
    cout<<"following are the types of operators in c++"<<endl;
    //endl is used to jump on the new line
    //1. Arithmatic operators
    cout<<"the value of a+b is"<<a+b<<endl;
    cout<<"the value of a++ is"<<a++<<endl;
    cout<<"the value of ++b is"<<++b<<endl;
    //2. comparison operators
    cout<<"Following are the different types of comparison operator"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a <b is "<<(a <b)<<endl;
    cout<<"The value of a >b is "<<(a >b)<<endl;
    //3.logical operators
    cout<<"the value of the logic a!=9 AND b!=29 is "<<(a!=9 && b!=29)<<endl;
    cout<<"the value of the logic a!=9 OR b!=29 is "<<(a!=9 || b!=29)<<endl;
    return 0;
}