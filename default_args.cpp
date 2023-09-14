//L 17 
//compulsory arguments at extereme left and default arguments at rightmost
#include<iostream>
using namespace std;

float calc(int amt,float factor=1.04){//factor=1.04 
    return amt*factor;
}

int main(){
    int money;
    cout<<"Enter the amount:"<<endl;
    cin>>money;
    cout<<"If you have "<<money<<"Rs then you will get "<<calc(money)<<" in total"<<endl;
    cout<<"If you have "<<money<<"Rs then you will get "<<calc(money,1.1)<<" in total"<<endl;
    
    return 0;
}