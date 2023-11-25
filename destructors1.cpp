//destructor is used to free the memory which is dynamically alloated

#include <iostream>
using namespace std;
/*it neither takes any argument nor returns any value*/
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "The constructor inside class num is called for object num "
             << "and count is " << count << endl;
    }
    ~num()
    {
        cout << "Destructor inside class num is called and the count is " << count << endl;
        count--;
    }
};
int main()
{
    cout<<"inside the main function"<<endl;
    cout<<"creatig the first object n1"<<endl;
    num n1;
    {
        cout<<"Entering the inner block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting the inner block";
    }
    cout<<"Back to the main function"<<endl;
    return 0;
}