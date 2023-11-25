#include<iostream>
#include<math.h>

using namespace std;
int count_digits(int n){
    int count =0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}
void check_armstrong(int n,int i){
    int number=n,sum=0,rem;
    while(n!=0){
        rem=n%10;
        sum+=pow(rem,i);
        n/=10;
    }
    if(sum==number){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not an armstrong number"<<endl;
    }
}
int main(){
    int num;
    cin>>num;
    int digits = count_digits(num);
    check_armstrong(num,digits);
    return 0;
}