#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Book{
    private:
    int book_id;
    char title[20];
    float price;

    public:
    Book(){
        book_id=0;
        strcpy(title,"no title");
        price=0;
    }
/*
    when this program ends all the class variables and functions 
    we have created are lost and their memory is freed
    And to keep that data intact we store it in the file
*/
    void getBookData();
    void showBookData();
    int store_data_in_file();
    void viewAllRecords();
};
void Book::getBookData(){
    cout<<"Enter Book Id, Title and Price of the Book:\n";
    cin>>book_id;
    cin.ignore();
    cin.getline(title,20);
    cin>>price;
}

void Book::showBookData(){
    cout<<"\n"<<book_id<<" "<<title<<" "<<price<<endl;
}

int Book::store_data_in_file(){
    if(book_id==0 && price==0){
        cout<<"Book data is not initialized\n";
        return 0;
    }
    else{
        ofstream fout;
        fout.open("file_class_obj", ios ::app|ios::binary);
        fout.write((char*)this,sizeof(*this));

/*
        char* ptr pointer in file will receive the data from address
        of the calling object(this).
        we can't write here b1 because 
        the function don't know about the object
        note the syntax 
        fout.write(caller object address,sizeof data)
        this : caller objects's address
        *this : caller object itself
*/

        fout.close();
        return 1;
    }

}

void Book::viewAllRecords(){
    ifstream fin;
    fin.open("file_class_obj",ios::in|ios::binary);
    if(!fin)// !fin   means file not found
    cout<<"File not exist. File Not found"<<endl;
    else{
       fin.read((char*)this,sizeof(*this));
       while(!fin.eof()){
        showBookData();
        fin.read((char*)this,sizeof(*this));
        //jewdhe records astil tevdhe read functions call karayla lagnar
       } 
       fin.close();
    }
}

int main(){
    Book b1, b2;
    b1.getBookData();
    b1.showBookData();
    b1.store_data_in_file();

//cmment out the b2 functions below and see the results
    b2.showBookData();
    b2.store_data_in_file();
    b2.viewAllRecords();
    // b1.viewAllRecords();
    return 0;
}