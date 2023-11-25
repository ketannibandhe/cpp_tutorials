#include<iostream>
using namespace std;
class y;
class x{
    int val1;
    public:
    void getdata(int);
    void printdata();
    friend void add(x,y);
};
void x::getdata(int num){
    val1=num;
}
void x::printdata(){
    cout<<"val1 in x class: "<<val1<<endl;
}

class y{
    int val2;
    friend void add(x,y);
    public:
    void getdata(int);
    void printdata();
};
void y::getdata(int num){
    val2=num;
}
void y::printdata(){
    cout<<"val2 in y class: "<<val2<<endl;
}

void add(x n1,y n2){
    cout<<"addition val1 and val2 :"<< n1.val1+n2.val2<<endl;
}



int main(){
    x number1;
    y number2;
    number1.getdata(5);
    number1.printdata();

    number2.getdata(10);
    number2.printdata();

    add(number1,number2);

    
    return 0;}