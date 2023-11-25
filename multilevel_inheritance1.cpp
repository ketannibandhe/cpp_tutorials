#include<iostream>
using namespace std;

class student{
    protected:
    int roll_no;
    public:
    void getno(int roll);
    int return_roll();
};

void student::getno(int roll){
        roll_no=roll;
    }

int student::return_roll(){
        return roll_no;
    }

class marks:public student{
    protected:
    int maths,physics;
    public:
    void getmarks(float m,float p);
    void setmarks();
};

void marks::getmarks(float m,float p){
    maths=m;
    physics=p;
}
void marks::setmarks(){
    cout<<"maths marks: "<<maths<<endl;
    cout<<"physics marks: "<<physics<<endl;
}


class extra_marks:public marks{
    protected:
    int exmarks;
    public:
    void getscore(int score);
    int setscore();
};

void extra_marks::getscore(int score){
    exmarks=score;
}
int extra_marks::setscore(){
    return exmarks;
}

class result:public extra_marks{
    int total=maths+physics+setscore();
    public:
    void final(){
        setmarks();
        cout<<"result of student with RollNo "<<return_roll()<<" : ";
        cout<<total;
    }
};

int main(){
    result ketan;
    ketan.getno(97);
    ketan.getmarks(90,88);
    ketan.getscore(9);
    ketan.final();

    return 0;}