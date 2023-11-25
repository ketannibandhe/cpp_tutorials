#include <iostream>
using namespace std;

int main()
{
    // int a = 4;
    // int *ptr = &a; // pointer is used to store the address of variables
    // cout << "&a  : " << &a << endl;
    // cout << "ptr : " << ptr << endl;
    // // ptr is container to store the address
    // cout << "a   : " << a << endl;
    // cout << "*ptr: " << *ptr << endl;

    // New operator
    int *p = new int(40);
    cout<<sizeof(*p)<<endl;
    cout<<"The address of p : "<<p<<endl;
    cout<<"the value at p("<<p<<") : *p("<<*p<<")"<<endl;

    char *ptr = new char('a');
    cout<<"sizeof ptr:"<<sizeof(*ptr)<<endl;
    cout<<"Address of ptr:"<<ptr<<endl;
    cout<<"Value at ptr: "<<*ptr<<endl;

    //reserving the space for an array
    int* arr = new int[3];
    arr[0]=10;
    arr[1]=200;//*(arr+1)=200;
    arr[2]=345;
    cout<<"Value at arr[0]:"<<arr[0]<<endl;
    cout<<"Value at arr[1] or arr+1:"<<*(arr+1)<<endl;
    cout<<"Value at arr[2]:"<<arr[2]<<endl<<endl;
    delete[] arr;

    cout<<"Value at arr[2]:"<<arr[2]<<endl;
    cout<<"Value at arr[0]:"<<arr[0]<<endl;
    cout<<"Value at arr[1]:"<<arr[1]<<endl;
    
    return 0;
}