#include<iostream>
using namespace std;

class student{
    int roll;
    char div;
    public:
    student(void);//1
    student(int a,char b);//2
    student (student &s);//copy constructor
    void printdata(void);
    
};
student :: student(void){
    roll=100;
    div='A';
}
student:: student(int a,char b){//2
    roll=a;
    div=b;
    }
void student:: printdata(void){
        cout<<"roll.no:"<<roll<<endl;
        cout<<"division:"<<div<<endl;
        cout<<"\n";
    }
student::student(student &s){//copy constructor
    roll=s.roll;
    div=s.div;
    cout<<"copy constructor is called"<<endl;
}
//when no copy constructor is found, 
//compiler supplies its own copy constructor

int main(){
    student s1,s2(20,'d'),s3(s2),s5;
//copy constructor is called when we want s3 should completely resemble s2
    // s1.printdata();
    // s2.printdata();
    // s3.printdata();
    // s5=s1;//here copy constructor will not be called
    student s4=s2;
    // s4.printdata();
 return 0;}