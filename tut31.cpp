//we can have multiple constructors in a class
//among the common functions,function whose parametrs are matched will be called
#include<iostream>
using namespace std;
class complex {
    int a;
    int b;
    public:
    complex(){//default contructor
        a=0;
        b=0;
    }
    complex(int x){
        a=x;
        b=0;
    }
    complex(int x,int y){//parameterised constructor
        a=x;
        b=y;
    }
    void printnum(void);

};
void complex :: printnum(void){
    cout<<"Number :"<<a<<" + "<<b<<"i"<<endl;
}

int main(){
    complex c1,c2(34),c3(2,3);
    c1.printnum();
    c2.printnum();
    c3.printnum();
    return 0;}