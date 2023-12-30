#include<iostream>
using namespace std;


template <class T1,class T2>
class myClass{
    public:
    T1 var1;
    T2 var2;
    myClass(T1 data1,T2 data2){
        var1=data1;
        var2=data2;
    }
    void display();
    // void display(){
    //     cout<<this->var1<<endl;
    //     cout<<this->var2<<endl;
    // }
};

//another way of defining the method outside the class 
template<class T1,class T2>
void myClass<T1,T2>::display(){
    cout<<this->var1<<endl;
    cout<<this->var2<<endl;
}


int main()
{
    myClass<int, float> obj(1,1.8 );
    obj.display();
}




