#include<iostream>
using namespace std;
int main(){
    try{
        int a,b,sum;
        cin>>a>>b;
        if(b==0){
            throw (b);
        }
        if((char(b)>='A' && char(b)<='Z')||(char(b)>= 'a' && char(b)<='z')){
            throw('c');
        }
        sum=a+b;
        cout<<"sum of "<<a<<" and "<<b<<": "<<sum<<endl;
    }
    catch(...){
        cout<<"either you have entered 0 or or a character\n";
    }
    // catch(char str){
    //     cout<<"you have entered character:\n";
    // }
    // catch(int num){
    //     cout<<"Denominator can't be 0\nplease enter valid denominator.\n";
    // }
    
    return 0;}