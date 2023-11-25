#include<iostream>
using namespace std;
int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if (arr[i]>max){
            max=arr[i];
        }
    }
    cout<<endl;
    cout<<max;
    return 0;
}