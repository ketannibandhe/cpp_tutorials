#include<iostream>
using namespace std;
// template<class T1=int,class T2=float,class T3=char>
template<class T1,class T2,class T3>
class ketan{
    public:
    T1 a;
    T2 b;
    T3 ch;
    ketan(T1 a1,T2 b1,T3 c1){
        a=a1;
        b=b1;
        ch=c1;
    }
    void display(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
        cout<<"value of c is "<<ch<<endl;
        
    }

};
int main(){
    ketan<int,float,char> k(10,10.23,'c');
    k.display();
    
    return 0;}