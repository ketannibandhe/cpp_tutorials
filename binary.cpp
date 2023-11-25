#include<iostream>
using namespace std;
int main(){
    int n,i=0,count=0,r;
    int arr[32];
    cin>>n;
    while(n!=0){
        r=n%2;
        if(r==1){
            count++;
        }
        n=n/2;
    }
    cout<<"1's in bunary of n:"<<count<<endl;
    return 0;}