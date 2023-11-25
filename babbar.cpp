#include<iostream>
using namespace std;
int main(){
    int n,r,diff;
cin>>n;
int sum=0;
int prod=1;
while(n!=0){
    r=n%10;
    sum+=r;
    prod*=r;
    n=n/10;
}
diff=prod-sum;
cout<<"difference between product and sum of the two numbers:"<<diff<<endl;
return 0;
}