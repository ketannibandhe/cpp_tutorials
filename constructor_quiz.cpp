#include<iostream>
#include<math.h>
using namespace std;

class point{
    int x,y;
    static int count;
    public:
    void getpoint(int a, int b);
    void displaypoint();
    friend float distance(point,point);

};
int point::count=0;
void point::getpoint(int a,int b){
        x=a;
        y=b;
    }
void point ::displaypoint(){
    count++;
    cout<<"point"<<count<<" : "<<"("<<x<<" , "<<y<<" )"<<endl;
}
float distance(point p1,point p2){
    float dist=sqrt(pow((p2.x-p2.x),2)-pow((p2.y-p1.y),2));
    return dist;
}
int main(){
    point point1,point2;
    point1.getpoint(1,1);
    point1.displaypoint();
    point2.getpoint(1,1);
    point2.displaypoint();
    cout<<"distance between point1 and point2 :"<<distance(point1,point2);
    return 0;}