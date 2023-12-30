//L 16 important
#include<iostream>
#include<iomanip>
using namespace std;
void swp(int &a,int &b);

void swp(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=4,y=12;
    cout<<"value of x and y before swapping :"<<x<<"\t"<<y<<endl;
    swp(x,y);
    cout<<"The value of x and y after swapping:"<<x<<"\t"<<y<<endl;
    return 0;
}
