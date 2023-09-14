//L18.......................................................................
#include<iostream>
using namespace std;

int fact(int num);

int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<fact(n)<<endl;  
    return 0;
}

int fact(int num){
    if(num==1){
        return num ;//base case
    }
    num=num*fact(num-1);
    return num;
}
