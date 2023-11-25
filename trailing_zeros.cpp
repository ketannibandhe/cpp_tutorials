#include<iostream>
using namespace std;
int main(){
    int num,rem,cnt=0;
    cin>>num;
    while(num !=0){
        rem=num%10;
        if(rem==0){
            cnt++;
            num/=10;
        }
        else{
            break;
        }
    }
    cout<<cnt;
    return 0;

}

