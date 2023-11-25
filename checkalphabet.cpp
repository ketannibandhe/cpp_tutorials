#include<iostream>
using namespace std;
int main(){
    int a;
    char b;
    cout<<"enter the value"<<endl;
    cin>>b;
    if (b >='A' && b<='Z'){
        cout<<"You have entered an uppercase letter."<<endl;
    }
    else if (b>='a'&&b<='z'){
        cout<<"You have entered an lowercase letter."<<endl;
    }
    else if (b>='0' && b<='9'){
        cout<<"You have entered a number."<<endl;
    }
    return 0;
    }