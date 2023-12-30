#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
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
    void SearchBook(char* t);
    void DeleteBook(char* t);
    void UpdateRecord(char* t);
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
        fout.open("rohit.txt", ios ::app|ios::binary);
        fout.write((char*)this,sizeof(*this));
        fout.close();
        return 1;
    }
    
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
}


void Book::viewAllRecords(){
    ifstream fin;
    fin.open("rohit.txt",ios::in|ios::binary);
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


void Book:: SearchBook(char* t){
    int counter=0;
    ifstream fin1;
    fin1.open("rohit.txt",ios::in|ios::binary);
    if(!fin1)
        cout<<"\nfile not found\n";
    else{
        fin1.read((char*)this,sizeof(*this));
        while(!fin1.eof()){
            if(!strcmp(t,title)){
                //strcmp will return 0 if the two strings are equal
                showBookData();
                counter++;
            }
            fin1.read((char*)this,sizeof(*this));
        }
        if(counter==0)
            cout<<"\nRecord Not found\n";
        fin1.close();
    }
}


void Book::DeleteBook(char* t){
    ifstream read_file;
    ofstream write_file;
    read_file.open("rohit.txt",ios::in|ios::binary);
    if(!read_file)
        cout<<"file not found.or it is not still created\n";
    else{
        getch();
        write_file.open("delete2.txt",ios::out|ios::binary);
        read_file.read((char*)this,sizeof(*this));
        while(!read_file.eof()){
            if(strcmp(title,t))
                write_file.write((char*)this,sizeof(*this));
            read_file.read((char*)this,sizeof(*this));
        }
        read_file.close();
        write_file.close();
        getch();
        remove("rohit.txt");
        getch();
        rename("delete2.txt","rohit.txt");

    }
}


void Book::UpdateRecord(char* t){
    fstream file1;
    file1.open("rohit.txt",ios::in|ios::out|ios::ate|ios::binary);
    file1.seekg(0);
    file1.read((char*)this,sizeof(*this));
    while(!file1.eof()){
        if(!strcmp(t,title)){
            // getBookData();
            int book_id;
            char title[20];
            float price;

            cout<<"enter the new book id,title and price\n";
            cin>>book_id;
            cin.ignore();
            cin.getline(title,20);
            cin>>price;
            cout<<"****"<<this->title<<"^^^^^"<<title;
            this->book_id=book_id;
            strcpy(this->title,title);
            this->price=price;
            
            // file1.seekp(file1.tellp()-sizeof(*this));
            file1.write((char*)this,sizeof(*this));
        }
        file1.read((char*)this,sizeof(*this));  
    }
    file1.close();
}

int menu(){
    int choice;
    cout<<"\nBook Management.\n";
    cout<<"1.Insert/Enter Book details\n";
    cout<<"2.Show All Book Records\n";
    cout<<"3.Search for a Book Data\n";
    cout<<"4.Delete a Book Data\n";
    cout<<"5.Update a perticular Book Record\n";
    cout<<"6.Exit\n";
    cout<<"\nEnter Your Choice\n";
    cin>>choice;
    return choice;
}

int main(){
    Book b[30];
    char t1[20];
    int i=0;
    do{
        // system("cls");//this will clear the screen after each iteration
        switch(menu()){
            case 1:
            b[i].getBookData();
            b[i].store_data_in_file();
            cout<<"BOOK Data inserted in the file:\n";
            break;
            case 2:
            b[i].viewAllRecords();
            break;
            case 3:
            cout<<"enter BOOK title to search:\n";
            cin.ignore();
            cin.getline(t1,20);
            b[i].SearchBook(t1);
            break;
            case 4:
            cout<<"enter BOOK title to delete:\n";
            cin.ignore();
            cin.getline(t1,20);
            b[i].DeleteBook(t1);
            break;
            case 5:
            cout<<"enter BOOK title to updata:\n";
            cin.ignore();
            cin.getline(t1,20);
            b[i].UpdateRecord(t1);
            break;
            case 6:
            cout<<"Thank You For Using This Application\n";
            cout<<"Press Any Key To Exit\n";
            getch();
            exit(0); 
            break;
            default:
            cout<<"\nInvalid Choice:";
        }
        // getch();//sreen click(enter) ke liye ruk jaye isliye getch() 
    }while(menu()!=6);
// // comment out the b2 functions below and see the results
//     b2.showBookData();
//     b2.store_data_in_file();
//     b2.viewAllRecords();
//     b1.viewAllRecords();

    
    //for searching operation comment out cin.ignore() 
    // cin.ignore();
    
    // b6.DeleteBook(t1);
    // cout<<"After deletion\n";
    // b6.viewAllRecords();
    return 0;
}