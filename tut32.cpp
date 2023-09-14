//constructures with default arguments
#include<iostream>
using namespace std;
class simple{
    int val1;
    int val2;
    int val3;
    public:
    simple(int a,int b=900,int c=90){
        val1=a;
        val2=b;
        val3=c;
    }
    void printdata(){
        cout<<"val1: "<<val1<<" val2: "<<val2<<"and val3 is "<<val3<<endl;
    }
};
int main(){
    simple c1(8,7,789),c2(6,5),c3(3);
    c1.printdata();
    c2.printdata();
    c3.printdata();
    return 0;}