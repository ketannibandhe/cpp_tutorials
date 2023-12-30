#include<iostream>
#include<map>
#include<string>
using namespace std;

void display(map<string,int>&marks){
    map<string,int>::iterator iter;
    for(iter=marks.begin();iter!=marks.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<endl<<endl;
}

int main(){
    map<string,int>marks;
    marks["ketan"]=80;
    marks["jack"]=70;
    marks["ram"]=100;
    marks["jay"]=1500;
    display(marks);
    

    marks.insert({"albert",80});
    display(marks);
    cout<<"marks.size()"<<marks.size()<<endl;
    cout<<marks.max_size()<<endl;
    return 0;
}