#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i=0,ans=0;
    cin>>n;
    while(n!=0){
        // int bit = n&1;
        int bit=n%10;
        ans = ans+(bit * pow(2, i)); // used to print the digit in reverse order
        n = n/10;
        i++;
    }
    cout<<ans;
    return 0;}