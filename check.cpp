#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=1;i>0;i++)
    {
        if (n/i==0){
            cout<<i;
            return 0;
        }
        i*=10;

    }
    return 0;}