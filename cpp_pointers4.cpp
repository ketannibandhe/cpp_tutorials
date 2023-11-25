#include <iostream>
using namespace std;
class shop
{
    int id;
    float price;

public:
    void setdata(int i, float p);
    void printdata();
};
void shop::setdata(int i, float p)
{
    id = i;
    price = p;
}
void shop::printdata()
{
    cout << "Price of Item with id " << id << " is " << price << endl;
}
int main()
{
    int size = 3;
    shop *ptr = new shop[size];//array of objects of class shop is declared
    shop *ptritem = ptr;
    int p, i;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id and the price of the item" << i + 1 << ":" << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
        cout << "Item no: " << j + 1 << endl;
        ptritem->printdata();
        ptritem++;
    }
    return 0;
}
