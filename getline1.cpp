#include<iostream>
using namespace std;
int main(){
    char ch[20];
    string str;
    cin>>ch;
    cin.ignore();
    //cin.ignore() is used to clear input buffer created by the cin 
    getline(cin,str);
    cout<<ch<<endl;
    cout<<str<<endl;
    
    return 0;}