#include<iostream>
using namespace std;
int main(){
    typedef union employee{
    int apple;//4
    char mango;//1
    float banana;//4
    }ep;
    //if we use the structure then total 9 bytes memory is allocated
    //but if we want to use only one variable out of 3 in that structure
    //then we use union
    //union basically shares the memory
    //union is used for better memory management
    ep harry;
    harry.apple=70;
    cout<<"harry.apple(alone):"<<harry.apple<<endl;
    harry.banana=400;
    cout<<"harry.apple after taking harry.banana:"<<harry.apple<<endl;
    cout<<"harry.banana:"<<harry.banana<<endl;
    /*
    note here that if we consider only apple then 70 will be printed 
    and if we take banana also then harry.apple will return the garbage value
    as it is overwritten.
    BUT THE VALUE OF HARRY.BANANA WILL BE PRINTED CORRECTLY
    AS WE ARE CONSIDERING THAT AT THAT TIME.
    */

    
    return 0;
    }