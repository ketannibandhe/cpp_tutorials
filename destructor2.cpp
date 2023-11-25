#include<iostream>
using namespace std;

class num{
    static int count;
    public:
    num();
    ~num();
};
int num::count=0;
num::num(){
    cout<<count<<endl;
    cout<<"constructor called"<<endl;
    count++;
    cout<<count<<endl;
}
num::~num(){
    cout<<count+100<<endl;
    cout<<"destructor called"<<endl;
    count++;
    cout<<count<<endl;
}
int main(){
    num n;
    {
        cout<<"inside n"<<endl;
        num m;
        {
            cout<<"inside m"<<endl;
            num o;
            {cout<<"inside o"<<endl;}
            cout<<"outside o"<<endl;
        }
        cout<<"outside m"<<endl;
    }
    cout<<"outside n"<<endl;

    return 0;}