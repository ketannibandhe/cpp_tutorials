#include<iostream>
using namespace std;
class shopitem{
    int id;
    float price;
    public:
        void getdata(int i,float p);
        void setdata(void);
};
void shopitem::getdata(int i,float p){
    id = i;
    price= p;
    }
void shopitem::setdata(){
    cout<<"item id: "<<id<<endl;
    cout<<"item price: "<<price<<endl;
}

int main(){
    int n=2;
    int* ptr=&n;
    int* ptr1=new int[34];
    /*now we have created the integr pointer which can store
    upto 34 integers
    now "ptr1" will contain memory address of first element
    */
    shopitem* ptr2 =new shopitem[5];
    shopitem *ptrtemp = ptr2;
   /*
   5 objects in one store
   pen
   pencill
   ball
   book
   notebook
   */
    for(int i=0;i<5;i++){
        int p;
        float q;
        cout<<"enter ID and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr2->getdata(p,q);
        ptr2++;//****************imp step**********************
    }
    for(int i=0;i<5;i++){
        cout<<"Item number"<<i+1<<endl;
        (ptrtemp)->setdata();
        ptrtemp++;
        // (ptrtemp+i)->setdata();

    }



    return 0;}