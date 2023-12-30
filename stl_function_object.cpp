#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={7,1,5,2,10,4,3};
    sort(arr,arr+5);
    //this will sort the array in ascending order

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    //this wil sort the array in descending order 
    sort(arr,arr+5,greater<int>());
    //here the greater is function object

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }   
    
    return 0;
}