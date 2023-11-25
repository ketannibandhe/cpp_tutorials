#include<iostream>
using namespace std;
int main(){
    int a,b,count=0;
    cout<<"ENter the position of Bishop:"<<endl;
    cin>>a>>b;
    count+=min(8-a,8-b);
    count+=min(a-1,b-1);
    count+=min(8-a,b-1);
    count+=min(a-1,8-b);
    cout<<"Bishop at position "<<a<<" "<<b<<" can move "<<count<<" steps in total"<<endl;
    return 0;
}  