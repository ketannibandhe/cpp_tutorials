#include<iostream>
using namespace std;

class employee{
    static int count;
    int id;
    public:
    void setdata(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"the Employee ID :"<<id<<endl;
        cout<<"employee count"<<count<<endl;

    }
    static int cnt(void){
        cout<<count<<endl;
    }
};
int employee::count=100;
int main(){
    employee h,k,j;
    h.setdata();
    h.getdata();
    employee::cnt();//we don't need h.cnt();etc

    j.setdata();
    j.getdata();
    employee::cnt();

    k.setdata();
    k.getdata();
    employee::cnt();

    return 0;
}