#include<iostream>
using namespace std;
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s,float r){
            title=s;
            rating=r;
        }
        virtual void display(){};
};

class CWHvideo:public CWH{
    protected:
        float video_length;
    public:
        CWHvideo(string s,float r,float vl):CWH(s,r){
            video_length=vl;
        }
        void display();
};
void CWHvideo::display(){
    cout<<"video title: "<<title<<endl;
    cout<<"video rating: "<<rating<<endl;
    cout<<"video length: "<<video_length<<endl;
}

class CWHtext:public CWH{
    protected:
        int words;
    public:
        CWHtext(string s,float r,int w):CWH(s,r){
            words=w;
        }
        void display();
};
void CWHtext::display(){
    cout<<"text tutorial tile: "<<title<<endl;
    cout<<"text tutorial rating(out of 5 stars): "<<rating<<"stars"<<endl;
    cout<<"no. of words: "<<words<<endl;
}

int main(){
    string title;
    float rating, vlength;
    int words;

    //for code with hary video
    title="code with harry virtual functions";
    vlength=28.36;
    rating=5.5;

    CWHvideo v1(title,rating,vlength);
    // v1.display();

    //for code with hary TEXT
    title="virtual functions notes code with harry";
    words=400;
    rating=4.89;
    CWHtext t1(title,rating,words);

    CWH* ptr[2];
    ptr[0]=&v1;
    ptr[1]=&t1;
    ptr[0]->display();
    ptr[1]->display();
    //note the output
    //try by removing virtual keyword from base class display
    return 0;}

    /*
    rules for virtual functions
    1. They cannot be static
    2. They are accessed by object pointers
    3. virtual function can be friend of another class
    4. A virtual function in base class might not be used.
    5  A virtual function is defined in the base class ,
       there is no necessity of redefining it in the derived class.
    */