#include<iostream>
using namespace std;
class Number{
    int no1;
    public:
    void getdata();
    void operator -();
};
void Number::getdata(){
    cin>>no1;
}
void Number::operator -(){
    no1=-no1;
    cout<<no1;
}
int main(){
    Number n1;
    n1.getdata();
    -n1;
    return 0;
}