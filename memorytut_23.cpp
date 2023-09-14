// Lecture 23 code with harry
// memory alloation in c++
// while making a class....
// one common memory is allocated for the all common objects in the class
#include <iostream>
using namespace std;
// use of arrays in class
class shop // creation of class as a user defined datatype
{
private:
    int itemid[100];
    int itemprice[100];
    int counter = 0;

public:
    void initcounter(void) { counter = 0; };
    void setprice(void);
    void displayprice(void);
};

void shop::setprice(void)
{
    cout << "enter ID of the item no " << counter << endl;
    cin >> itemid[counter];
    cout << "enter price of the item" << endl;
    cin >> itemprice[counter];
    counter++;
    cout << "now counter is:" << counter << endl;
}

void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with ID " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

// driver program
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    return 0;
}