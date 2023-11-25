#include<iostream>
using namespace std;
int main(){
    int fact,count=0;
    cin>>fact;
    while(fact>=5){
        count+=fact/5;
        fact/=5;
    }
    cout<<count<<endl;
    return 0;
}