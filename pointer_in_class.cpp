#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    void getdata(int a,int b);
    void printdata();
};
void complex::getdata(int a,int b){
    real=a;
    img=b;
    }
void complex::printdata(){
    cout<<"real part: "<<real<<endl;
    cout<<"imaginary part: "<<img<<endl;
}
int main(){
    complex c1;
    c1.getdata(7,8);
    c1.printdata();
    complex *ptr = &c1;//***********************************************
    cout<<"after pointer declaration"<<endl;
    (*ptr).getdata(5,5);
    (*ptr).printdata();
    //bracket is used because . operator has higher precedence over ()

    //another way of declration
    complex *ptr1 = new complex;
    (*ptr1).getdata(10,8);
    ptr1->printdata();
    //this tells to run printata of the object to which ptr is pointing


    //array of objects
    cout<<endl;
    complex *arr = new complex[5];//array of 5 new objects created
    //dynamically created objcet array of 5 size
    arr->getdata(2,2);
    (arr+1)->getdata(1,1);
    (arr+2)->getdata(3,3);
    (arr+3)->getdata(4,4);
    (arr+4)->getdata(5,5);

    for(int i=0;i<5;i++){
        (arr+i)->printdata();
    }
    return 0;}