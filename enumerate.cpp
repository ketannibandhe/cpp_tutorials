#include<iostream>
using namespace std;
int main(){
    enum day{morning,afternoon,night};
    //enum will allocate 0 for morning,1 for afternoon,2 for night automatic 
    cout<<morning<<endl;
    cout<<afternoon<<endl;
    cout<<night<<endl;
    int  day1=afternoon;
    int  day2=night;
    int  day3=morning;
    cout<<day1<<endl;
    cout<<day2<<endl;
    cout<<day3<<endl;
    
    return 0;
}