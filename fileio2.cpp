#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    string str,line;
    fout.open("file1");
    while(fout){
        getline(cin,str);
        if(str=="-1")
        break;
        fout<<str<<endl;
    }
    fout.close();

    ifstream read;
    ofstream write;
    read.open("file1");
    write.open("file2");
    while(!read.eof()){
        getline(read,line);
        write<<line<<endl;
    }
    read.close();
    write.close();
    return 0;}