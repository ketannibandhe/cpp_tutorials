//lecture 24
//task is to maintain a single/common/same counter for number of objects
//problem is we cant pass count from one object to other
#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;//default value zero
    /*
    each object has its own count so we can't pass count from 
    one object to other
    */
    public:
        void setdata(void){
            cout<<"enter the ID"<<endl;
            cin>>id;
            count++;
        }
        void getdata(void){
            cout<<"employee ID:"<<id<<endl;
            cout<<"and this is employee no."<<count<<endl;
        }
        static void getcount(void){
            cout<<"the value of count is "<<count<<endl;
        }
};

//count is a static data memmber of class employee
int employee :: count;//initializing static variable otside the class
int main(){
    employee harry,ketan,jay;
    // harry.id=1;
    // harry.count=2;invalid as id and count are private
    
    harry.setdata();
    harry.getdata();
    employee::getcount();
    
    ketan.setdata();
    ketan.getdata();
    employee::getcount();
    

    jay.setdata();
    jay.getdata();
    employee::getcount();


    return 0;
}
//harry,ketan and lovesh are sharing a single account variable