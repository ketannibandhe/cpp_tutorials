//break and continue in cpp
#include<iostream>
using namespace std;
int main(){
    //break
    // for (int i = 0; i < 40; i++)
    // {
    //     cout<<i<<endl;
    //     if(i==11){
    //         break;
    //     }
    // }

    for (int i = 0; i < 40; i++)
    {
        
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;}