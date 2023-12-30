#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int>::iterator it1=lst.begin();
    for(it1=lst.begin();it1!=lst.end();it1++){
        cout<<*it1<<" ";
    }
    cout<<endl;
}

int main(){
    list <int>l1;
    l1.push_back(1);
    l1.push_back(10);
    l1.push_back(8);
    l1.push_back(4);
    l1.push_back(7);
    cout<<"list l1"<<endl;
    display(l1);
    cout<<endl;

    list<int>l2(8);//empty list of size 8
    list<int>::iterator iter;
    iter=l2.begin();
    *iter=40;
    iter++;
    *iter =5;
    iter++;
    *iter=4;
    iter++;
    *iter =4;
    iter++;
    *iter=21;
    //here we have entered 5 values out size of list i.e. 7
    //so it will print 0 for remaining 
    cout<<"original list l2"<<endl;
    display(l2);
    cout<<endl;
    cout<<"sorted list"<<endl;
    l2.sort();
    display(l2);
    cout<<endl;

    cout<<"pop back:\n";
    l2.pop_back();
    display(l2);
    cout<<endl;

    //to remove the element from the front
    cout<<"pop front;\n";
    l2.pop_front();
    display(l2);
    cout<<endl;

    //to remove perticular element 
    cout<<"removing a perticular element(here 4):\n";
    l2.remove(4);//it will remove all the occurences of 4 from the list
    display(l2);
    cout<<endl;
    // l2.push_back(10);
    // l2.push_back(10);
    // l2.push_back(10);
    // l2.push_back(10);
    // display(l2);  

    //merging two lists 
    cout<<"merging lists l1 and l2:\n";
    display(l1);
    display(l2);
    cout<<endl;
    l1.merge(l2);
    display(l1);
    cout<<endl;
    l2.merge(l1); 
    display(l2);
    cout<<endl;

    l1.reverse();
    display(l1);

    return 0;
}