#include<iostream>
using namespace std;
class point{
    int a,b;
    public:
    point(int,int);
    void takepoint(){
        cout<<"point is ("<<a<<","<<b<<")"<<endl;
    }
};

point::point(int x,int y){
        a=x;
        b=y;
    }
int main(){
    point c1(1,2);
    c1.takepoint();
    
    return 0;
}