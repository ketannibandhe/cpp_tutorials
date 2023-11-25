#include<iostream>
using namespace std;

class Base1{
    protected:
    int roll_no;
    public:
    void getno(int roll);
    int return_roll();
};

void Base1::getno(int roll){
        roll_no=roll;
    }

int Base1::return_roll(){
        return roll_no;
    }

class Base2{
    protected:
    int maths,physics;
    public:
    void getmarks(float m,float p);
    void setmarks();
};

void Base2::getmarks(float m,float p){
    maths=m;
    physics=p;
}
void Base2::setmarks(){
    cout<<"maths marks: "<<maths<<endl;
    cout<<"physics marks: "<<physics<<endl;
}

class Result:public Base1,public Base2{
    int result;
    public:
    void setresult();
};

void Result::setresult(){
    result=maths+physics;
//here we have used private variables of base class 
//in the public function of the the derived class
    setmarks();
    cout<<"Result of student with Roll no "
    <<roll_no<<" : "<<result<<endl;
}
int main(){

    Result ketan;
    ketan.getno(97);
    ketan.getmarks(90.30,91.78);
    ketan.setresult();
    
    return 0;}