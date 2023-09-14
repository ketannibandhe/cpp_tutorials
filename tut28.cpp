
//a simple example to understand friend functions
#include<iostream>
using namespace std;

class c2;
class c1{
    int num1;
    public:
    void getnum(int a){
        num1=a;
    }
    void disp(void){
        cout<<"num1 is:"<<num1<<endl;
    }
    friend void add(c1,c2);
};

class c2{
    int num2;
    public:
    void getnum(int b){
        num2=b;
    }
    void disp(void){
        cout<<"num1 is:"<<num2<<endl;
    }
    friend void add(c1,c2);
};
void add(c1 x,c2 y){
    cout<<"the addition of two numbers is "<<(x.num1+y.num2);
}
int main(){
    c1 var;
    var.getnum(8);
    c2 var2;
    var2.getnum(5);
    add(var,var2);

    
    return 0;}