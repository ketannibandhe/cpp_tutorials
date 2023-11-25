// #include <iostream>
// using namespace std;

// class shop // keyword datatype
// {
//     int counter;
//     int id[100];
//     int price[100];

// public:
//     void inticounter(void) { counter = 0; }
//     void setprice(void);
//     void displayprice(void);
// };

// void shop::setprice(void)
// {
//     cout << "enter id of item no " << counter + 1 << endl;
//     cin >> id[counter];
//     cout << "enter item's price ";
//     cin >> price[counter];
//     counter++;
// }

// void shop::displayprice(void)
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "The price of item " << i + 1 << " with ID " << id[i] << " is " << price[i] << endl;
//     }
//     {
//         /* code */
//     }
// }

// int main()
// {
//     int n;
//     shop dukaan;
//     cout << "Enter the number of items in shop:" << endl;
//     cin >> n;
//     dukaan.inticounter();
//     for (int j = 0; j < n; j++)
//     {
//         dukaan.setprice();
//     }
//     dukaan.displayprice();
//     return 0;
// }

#include <iostream>
using namespace std;

class shop // keyword datatype
{
    int counter=0;
    int id;
    int price;

public:
    void inticounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop::setprice(void)
{
    cout << "enter id of item no " << counter + 1 << endl;
    cin >> id;
    cout << "enter item's price ";
    cin >> price;
    counter++;
}

void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item " << i + 1 << " with ID " << id << " is " << price << endl;
    }
    {
        /* code */
    }
}

int main()
{
    int n;
    shop item[5];
    cout << "Enter the number of items in shop:" << endl;
    cin >> n;
    for (int j = 0; j < 5; j++)
    {
        item[j].setprice();
        item[j].displayprice();
    }
    
    return 0;
}