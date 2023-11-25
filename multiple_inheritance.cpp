#include<iostream>
using namespace std;

class sub1{
    int maths;
    public:
    void getmarks1(int m);
    int setmarks1();
};
void sub1::getmarks1(int m){
    maths=m;
}
int sub1::setmarks1(){
    return maths;
}

class sub2{
    int physics;
    public:
    void getmarks2(int p);
    int setmarks2();
};
void sub2::getmarks2(int p){
    physics=p;
    
}
int sub2::setmarks2(){
    return physics;
}

class Derived:public sub1,private sub2{
    int total;
    public:
    int total_marks();
};
int Derived::total_marks(){
    getmarks2(100);
//it is privately inherited so it is called inside the fuction 
//and not directly outside
    cout<<"Total marks :"<<(setmarks1()+setmarks2())/2;
}

int main(){
    Derived ketan;
    ketan.getmarks1(90);
    ketan.total_marks();
    return 0;
    }