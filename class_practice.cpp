#include<iostream>
using namespace std;

class shop{
    private :
    int counter=0;
    int itemid;
    string name;

    public:

    void getdata();
    void displaydata();
};
// int shop::counter;

void shop::getdata(){
    cout<<"enter item name:\n";
    cin>>name;
    cout<<"enter item ID:\n";
    cin>>itemid;
}

void shop::displaydata(){
    cout<<"item name:"<<name<<endl;
    cout<<"item ID:"<<itemid<<endl;
    counter++;
    cout<<counter;
}
int main(){
    shop product[5],item;
    item.getdata();
    item.displaydata();

    for(int i=0;i<5;i++){
        product[i].getdata();
    }
    for(int i=0;i<5;i++){
        product[i].displaydata();
    }
    // shop a[3],b[3],c[3];
    // for(int i=0;i<3;i++){
    //     a[i].getdata();
    // }
    // for(int i=0;i<3;i++){
    //     a[i].displaydata();
    // }
    // for(int i=0;i<3;i++){
    //     b[i].getdata();
    // }
    // for(int i=0;i<3;i++){
    //     b[i].displaydata();
    // }
    // for(int i=0;i<3;i++){
    //     c[i].getdata();
    // }
    // for(int i=0;i<3;i++){
    //     c[i].displaydata();
    // }

    return 0;}