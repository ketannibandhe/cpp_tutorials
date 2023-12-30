#include<iostream>
#include<vector>
using namespace std;

template<class T>
void display(vector <T> &v1){
    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    int num;
    char c;
    vector<int>vec1(5);
    vector<char>vec2(4);  
    vector<char>vec3(vec2);
    vector<int>vec4(6,3);

    // vec2.push_back('a');
    // vec2.push_back('q');
    // vec2.push_back('k');
    // vec2.push_back('o');

    for(int i=0;i<5;i++){
        cin>>c;
        vec2.push_back(c);
    }

    display(vec1);
    display(vec2);
    display(vec3);
    display(vec4);
    return 0;}