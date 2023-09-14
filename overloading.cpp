//L 19 
//compiler tries to match the prototype with the called function & its arguments
#include<iostream>
using namespace std;

int sum(int a,int b);
int sum(int a,int b,int c);
int volume(int r,int h);
int volume(int l,int b,int h);
int volume(int s);
int main(){
    cout<<"The sum of 3 and 4 is :"<<sum(3,4)<<endl;
    cout<<"The sum of 3,4 and 5 is :"<<sum(3,4,5)<<endl;
    cout<<"The volume of cube with side 4 is :"<<volume(4)<<endl;
    cout<<"The volume of cylinder with r3,h4 is :"<<volume(3,4)<<endl;
    cout<<"The volume of cuboid with l3,b5 and h6 is :"<<volume(3,5,6)<<endl;


    
    return 0;}

int sum(int a,int b){
    cout<<"the summ using 2 aargumrnts"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"the summ using 3 aargumrnts"<<endl;
    return a+b+c;
}
int volume(int r,int h){
    cout<<"vcyl"<<endl;
    return (3.14*r*r*h);
}
int volume(int l,int b,int h){
    cout<<"vcuboid"<<endl;
    return (l*b*h);
}
int volume(int s){
    cout<<"vcube"<<endl;
    return (s*s*s);
}