#include<iostream>
#include<math.h>
using namespace std;
class opn{
    private:
    int x,y;
    public:
    void coor(int a,int b){
        x=a;
        y=b;
    }
    
    
    void printpoint(opn o1,opn o2){
        x=o2.x-o1.x;
        y=o2.y-o1.y;
        cout<<"the x distance is"<<x<<endl;
        cout<<"the y distance is"<<y<<endl;
    }
    void final(void);

};
void opn ::final(void){
    double ans=sqrt((x*x)+(y*y));
    cout<<"distance between the coordinates:"<<ans<<endl;
}


int main(){
    opn o3,o4,o5;
    o3.coor(1,1);
    o4.coor(1,1);
    o5.printpoint(o3,o4);
    o5.final();
    return 0;}