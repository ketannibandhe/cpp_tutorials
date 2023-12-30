#include<iostream>
#include<vector>
//vector can be of int,float or it can be a template

using namespace std;

void display(vector<int> &v1){
    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i)<<" ";
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>vec1;
    int num;
    for(int i=0;i<5;i++){
        cout<<"Enter an element to add to this vector:\n";
        cin>>num;
        vec1.push_back(num);
    }

    //create an iterator
    vector<int>::iterator it1=vec1.begin();
    //iterator it1 pointing at begin of vec1 is created

    vec1.pop_back();
    display(vec1);
    vec1.insert(it1,566);
    display(vec1);
    // vec1.insert(it1+3,5,500);
    //this will insert 500 5 times at 4th (itr1+3) position
    // display(vec1);
    return 0;}