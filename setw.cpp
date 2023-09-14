#include<iostream>
#include<iomanip>
using namespace std;
//once a variable is defined as a const you cant change it
//it will give an error
int main(){
    //manipulators in c++
    const int a=9;
    int b=467,c=6666;
    // a=89; this will give an error
    cout<<"value of a without setw :"<<a<<endl;
    cout<<"value of b without setw :"<<b<<endl;
    cout<<"value of c without setw :"<<c<<endl;
    cout<<"\n";

    cout<<"value of a using setw :"<<setw(4)<<a<<endl;
    cout<<"value of b using setw :"<<setw(4)<<b<<endl;
    cout<<"value of c using setw :"<<setw(4)<<c<<endl;




}
