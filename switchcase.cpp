//lecture 9 code with harry
#include<iostream>
using namespace std;

int main(){
        int num;
        cout<<"Enter a number";
        cin>>num;
        switch(num){
            case 1:
            cout<<"you have written one"<<endl;
            break;
            case 10:
            cout<<"you have written Ten"<<endl;
            break;
            case 100:
            cout<<"you have written Hundred"<<endl;
            break;
            default:
            cout<<"you have not written any valid number"<<endl;
            break;

        }
    }