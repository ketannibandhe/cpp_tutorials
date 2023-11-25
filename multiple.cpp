//multiple inheritance
/*
            ----------------     ---------------
            |     base1     |   |     base2     |
            ----------------     ---------------
                    |                   |
                    --------------------
                             |
                     -----------------
                     |    Derived     |
                     -----------------
*/

#include<iostream>
using namespace std;
class student{
    protected:
        int roll;
    public:
        void getrollnumber(int r);
        int setrollnumber();

};

void student :: getrollnumber(int r){
    roll =r;
}
int student :: setrollnumber(){
    return roll;
}

class marks{
    protected:
        int maths,physics;
    public:
        void getmarks(int m,int p);
        void setmarks();
};
void marks::getmarks(int m,int p){
        maths=m;
        physics=p;
    }
void marks::setmarks(){
       cout<<"maths marks: "<<maths<<endl;
       cout<<"physics marks: "<<physics<<endl; 
}

class result:private student,public marks{
    private:
    int total;
    public:
    void set_result(){
        getrollnumber(97);
        total=maths+physics;
        cout<<"student with roll number "<<setrollnumber()<<" has got "<<maths<<" marks in maths and "<<physics<<" marks in physics"<<endl;
    }
};
int main(){
    result r1;
    r1.getmarks(90,98);
    r1.set_result();
return 0;
}
    