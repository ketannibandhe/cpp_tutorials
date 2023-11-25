#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            count++;
        }
       
    }
    if (count>=1){
        cout<<"Not Prime number"<<endl;
    }
    else{
        cout<<"Prime number"<<endl;
    }
    return 0;}