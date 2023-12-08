#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    void operator+(Number n2);//prototype
    Number operator-(Number n2);
    void display();
    void getno();
};

void Number::operator+(Number n2){
    //first object is implicitly passed as a calling object
    Number n3;
    n3.a=a+n2.a;
    cout<<n3.a<<endl;
}

Number Number::operator-(Number n2){
    //first object is implicitly passed as a calling object
    Number n3;
    n3.a=a-n2.a;
    return n3;
}

void Number::getno(){
    cout<<"\nEnter No:\n";
    cin>>a;
}
void Number::display(){
    cout<<"\nResult: "<<a;
}

int main(){
    Number n1,n2,sub;
    //first operand is implicitly passed as a calling object
    n1.getno();
    n2.getno();
    cout<<"Result of addition: ";
    n1+n2;//function call
    sub=n1-n2;
    sub.display();
    return 0;}