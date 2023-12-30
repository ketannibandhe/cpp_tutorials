#include<iostream>
using namespace std;
template<class T1,class T2>
void swapp(T1 var1,T2 var2){
    cout<<endl<<var1<<endl<<var2<<endl;
    T1 temp=var1;
    var1=var2;
    var2=temp;
    cout<<endl<<var1<<endl<<var2<<endl;
}

int main(){
    float a=1.2,b=2.3;
    char c1='a',c2='g';
    swapp(a,b);
    swapp(c1,c2);
}