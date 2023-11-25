#include<iostream>
using namespace std;


int main(){

    //basic example
    int a=4;
    int* ptr=&a;
    cout<<"int ptr = &a: "<<&a<<" (ptr stores address of a)"<<endl;
    cout<<"int* ptr : "<<*ptr<<" (*ptr stores value at address of a)"<<endl;
    cout<<"\n"; 
    //new operator 
    int *p=new int(80);
    cout<<"the value at p is "<<*p<<endl;
    cout<<"sizeof(p): "<<sizeof(p)<<endl;

    char *ch=new char(80);
    cout<<"the value at ch is "<<*ch<<endl;
    cout<<"sizeof(ch): "<<sizeof(ch)<<endl;

    //creating an integer array
    int *arr = new int[3];
    //we have created array of size 3
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //delete operator
    delete arr;//this will delete some of the elements
    cout<<"after using delete operator"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }  
    //to delete whole array
    delete[] arr;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }  

    return 0;
}