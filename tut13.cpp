//arrays and pointers in cpp L 13
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int *ptr=arr;
    cout<<"enter the array elememts:"<<endl;
    // arr--> address of first block
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<*(ptr+i)<<"\t";
    }

    //arrays and pointers...................................
    cout<<"\nptr:"<<*ptr;
    cout<<"arr[0]:"<<arr[0]<<endl;
    cout<<"addresss of arr[0] in terms of pointers:"<<ptr<<endl;
    cout<<"The value at arr[1] *ptr+1:"<<*ptr+1<<endl;//invalid
    cout<<"The value at arr[1] *(ptr+1):"<<*(ptr+1)<<endl;//correct***********
    cout<<"The value at arr[1] *(ptr)+1:"<<*(ptr)+1<<endl;//invalid
    return 0;
    }