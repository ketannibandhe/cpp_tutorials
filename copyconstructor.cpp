#include<iostream>
using namespace std;

class student{
    int roll;
    char div;
    public:
    student(void);//1
    student(int a,char b){//2
        roll=a;
        div=b;
    }
    student (student &s);//copy constructor
    void printdata(void);
    
};
student :: student(void){
    roll=100;
    div='A';
}
void student:: printdata(void){
        cout<<"roll.no:"<<roll<<endl;
        cout<<"division:"<<div<<endl;
        cout<<"\n"<<endl;
    }
student::student(student &s){//copy constructor
    cout<<"copy constructor is called"<<endl;
    roll=s.roll;
    div=s.div;
}
//when no copy constructor is found, compiler supplies its own copy constructor

int main(){
    student s1,s2(20,'d'),s3(s2);
    s1.printdata();
    s2.printdata();
    s1.printdata();
    s3.printdata();
    // student s4=s2;
    // s4.printdata();

    
 return 0;}