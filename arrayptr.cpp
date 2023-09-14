#include<iostream>
using namespace std;
int main(){
    int marks[5]={92,91,90,98,96};
    int *ptr=marks;
    cout<<"1st element:"<<*ptr<<endl;
    cout<<&marks[1]<<endl;
    cout<<ptr<<endl;
    cout<<(ptr+1)-(ptr)<<endl;
    cout<<sizeof(float)<<endl;

    return 0;}