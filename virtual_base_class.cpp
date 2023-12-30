#include<iostream>
using namespace std;

class student{
    protected:
    int roll_no;
    public:
    void setno(int i);
    void printno();
};
void student::setno(int i){
    roll_no = i;
}
void student :: printno(){
    cout<<"Student Roll no:"<<roll_no<<endl;
}

class marks:virtual public student{
    protected:
    int maths,physics;
    public:
    void setmarks(int m,int p);
    void printmarks();
};

void marks::setmarks(int m,int p){
    maths=m;
    physics=p;
    }

void marks :: printmarks(){
    cout<<"Maths marks:"<<maths<<endl;
    cout<<"Physics marks:"<<physics<<endl;
}

class score:virtual public student{
    protected:
    int score;
    public:
    void setscore(int sc);
    void printscore(); 
};

void score::setscore(int sc){
    score=sc; 
}
void score::printscore(){
    cout<<"Student score:"<<score<<endl;
}


class result:public marks,public score{
    
    protected:
    float total;
    public:
    void printresult();
};

void result::printresult(){
    total=maths+physics+score;
    printno();
    printmarks();
    printscore();
    cout<<"THe student result :"<<total<<endl;
    
}
int main(){
    result ketan;
    ketan.setno(97);
    ketan.setmarks(98.78,88.30);
    ketan.setscore(9);
    ketan.printresult();
    return 0;
    }