#include<iostream>
using namespace std;
template <class T>

void sort(T arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                T temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
};
int main(){
    int a[6]={6,3,5,1,8,4};
    float a1[6]={1.3,8.6,2.7,9.4,3.1,4.9};
    char ch[6]={'a','z','Z','A','F','q'};
    sort (a,6);
    sort(ch,6);
    sort(a1,6);
    return 0;
}