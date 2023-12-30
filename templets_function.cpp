#include<iostream>
using namespace std;
template<class T>
void func(T a){
    cout<<"using template:\n";
    cout<<a;
}
void func(int a){
    cout<<"regular function:\n";
    cout<<a;
}
int main(){
    int num=4;
    func(4);
    
    return 0;}
