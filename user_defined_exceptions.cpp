#include<iostream>
#include<exception>
using namespace std;

class myException:public exception{
    protected:
    int n;

    public:

    string e1;
    myException(string error){
        e1=error;
    }
    void getdata();
    void displaydata();
    const char* what(){
            cout<<"error";
        }
};

void myException::getdata(){
    try{
        cout<<"Enter a number:\n";
        cin>>n;
        if(n<=0){
            throw myException("Negative number");
        }
        else{
            cout<<n;
        }
        cout<<endl;
    }
    catch (myException e){
        e.what();
    }
}

int main(){
    myException m("bnvb");
    m.getdata(); 

    return 0;
}
