#include<iostream>
using namespace std;

typedef struct employee{
    int eid;
    char favchar;
    float salary;
    }ep;

int main(){
    ep harry;
    harry.eid=12;
    harry.favchar='a';
    harry.salary=70000;
    cout<<"harry's ID:"<<harry.eid<<endl;
    cout<<"harry's favourite charcter:"<<harry.favchar<<endl;
    cout<<"harry's salary:"<<harry.salary<<endl;
return 0;

}
