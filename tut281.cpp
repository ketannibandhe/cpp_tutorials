#include<iostream>
using namespace std;
class c2;
class c1{
    int val1;
    public:
    void getdata(int num1){
        val1=num1;
    }
    void printdata(void){
        cout<<"the value is "<<val1<<endl;
    }
    friend void exchange(c1&,c2&);
};

class c2{
    int val2;
    public:
    void getdata(int num2){
        val2=num2;
    }
    void printdata(void){
        cout<<"the value is "<<val2<<endl;
    }
    friend void exchange(c1&,c2&);
};
void exchange(c1 &x,c2 &y){
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;

}
int main(){
    c1 oc1;
    oc1.getdata(6);
    oc1.printdata();

    c2 oc2;
    oc2.getdata(2);
    oc2.printdata();
    exchange(oc1,oc2);
    cout<<"the value of c1 after exchanging:";
    oc1.printdata();
    cout<<"the value of c1 after exchanging:";
    oc2.printdata();



    return 0;}