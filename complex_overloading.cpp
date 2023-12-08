#include<iostream>
using namespace std;

class complex{
    int r,c;
    public:
    complex operator+(complex num2);
    complex operator-(complex num2);
    complex operator*(complex num2);
    complex operator/(complex num2);
    void getdata(int real,int img);
    void displaydata();
};

void complex::getdata(int real,int img ){
    r=real;
    c=img;
}

void complex::displaydata(){
    cout<<"Number : ("<<r<<" + "<<c<<"i)"<<endl;
}

complex complex::operator+(complex num2){
    complex num3;
    num3.r=r+num2.r;
    num3.c=c+num2.c;
    return num3;
}

complex complex::operator-(complex num2){
    complex num3;
    num3.r=r-num2.r;
    num3.c=c-num2.c;
    return num3;
}

complex complex::operator*(complex num2){
    complex num3;
    num3.r=((r*num2.r)-(c*num2.c));
    num3.c=((r*num2.c)+(c*num2.r));
    return num3;
}

complex complex::operator/(complex num2){
    complex num3;
    num3.r=((r*num2.r)+(c*num2.c))/((num2.r*num2.r)+(num2.c*num2.c));
    num3.c=((c*num2.r)-(r*num2.c))/((num2.r*num2.r)+(num2.c*num2.c));
    return num3;
}

int main(){
    complex c1,c2,add,sub,mult,div;
    c1.getdata(2,6);
    c1.displaydata();
    c2.getdata(4,1);
    c2.displaydata();
    add=c1+c2;
    cout<<"Comlex Subtraction result: "<<endl;
    add.displaydata();
    sub=c1-c2;
    cout<<"Complex Subtraction result: "<<endl;
    sub.displaydata();
    mult=c1*c2;
    cout<<"Complex Multiplication result: "<<endl;
    mult.displaydata();
    div=c1/c2;
    cout<<"Complex Division result: "<<endl;
    div.displaydata();
    return 0;}