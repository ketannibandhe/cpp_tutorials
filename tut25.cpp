
//creating an array of objects
#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;
    static int count;

public:
    void setid(void)
    {
        int salary = 123;
        cout << "Enter ID of the employee:" << endl;
        cin >> id;
        count++;
    }
    void getid(void)
    {
        cout << "ID of the employee is " << id << endl;
        cout << "count is " << count << endl;
    }
};
int employee::count;
int main()
{
    employee ep[5];
    for (int i = 0; i < 5; i++)
    {
        ep[i].setid();
        ep[i].getid();
    }

    return 0;
}