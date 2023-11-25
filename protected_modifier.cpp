#include<iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void getdata(int r){
        roll_no=r;
    }
    void setdata();
};

void student::setdata(){
    cout<<"Student roll no: "<<roll_no<<endl;
}

class marks:private student{
    private:
    int marks;
    public:
    int getmarks(int m);
    void result();
};
int marks::getmarks(int m){
    marks=m;
    return m;
}
void marks::result(){
    
    setdata();
    cout<<"Student with roll no "<<roll_no<<" has got "<<marks<<" marks "<<endl;
}


int main(){
    marks s;
    student ketan;
    ketan.getdata(90);
    ketan.setdata();
    s.getmarks(99);
    s.result();
    return 0;
    }