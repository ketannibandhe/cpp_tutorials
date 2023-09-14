//lecture 9 code with harry
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"this is tutorial 9"<<endl;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if(age>18){
        cout<<"you can vote"<<endl;
    }
    else if(age==18){
        cout<<"you can vote next year"<<endl;
    }
    else{
        cout<<"you can't vote"<<endl;
    }
    return 0;
}