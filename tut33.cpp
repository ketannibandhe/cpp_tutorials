//dynamic initialization of objects using constructors
#include<iostream>
using namespace std;
class bank{
    int principal;
    int year;
    float roi;
    float final;

    public:
    bank(){};//*************this is must***************************************
    bank(int x,int y,float r);
    bank(int x,int y,int r);
    void show();
};
bank :: bank(int x,int y,int r){
    principal=x;
    year=y;
    roi=float(r)/100;
    final=principal;
    for (int i = 1; i <=year; i++)
    {
        final=final*(1+roi);//******************not r
    }
    
}

bank :: bank(int x,int y,float r){
    principal=x;
    year=y;
    roi=r;
    final=principal;
    for (int i = 1; i <=year; i++)
    {
        final=final*(1+roi);//********************not r
    }
    
}
void bank :: show(){
    cout<<"the return value for "<<principal<<endl<<" after "<<year<<" years is "<<final<<endl;
}
int main(){
    bank b1,b3;
    int x,y;
    float r;
    int R;
    cout<<"enter the value of x,yand r"<<endl;
    cin>>x>>y>>r;
    b1=bank(x,y,r);
    b1.show();
    cout<<"enter the value of x,yand r"<<endl;
    cin>>x>>y>>R;
    bank b2=bank(x,y,R);
    b2.show();
    
    return 0;}