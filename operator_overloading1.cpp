#include<iostream>
using namespace std;
class Number{
    int no1;
    public:
    void getdata();
    void operator ++();
    void operator ++(int);
    void displaydata();
};
void Number::operator ++(){
    ++no1;
}
void Number::operator ++(int a){
    no1++;
}
void Number::getdata(){
    cin>>no1;
}
void Number::displaydata(){
    cout<<no1<<endl;
}
int main(){
    Number n1;
    n1.getdata();
    n1++;
    n1.displaydata();
    ++n1;
    n1.displaydata();
    return 0;
}