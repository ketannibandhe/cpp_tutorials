// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int num, n;
//     cout << "enter a number:" << endl;
//     cin >> num;
//     for (int i = 0; i <= sqrt(num); i++)
//     {
//         n = pow(2, i);
//         if (n == num)
//         {
//             cout << "yes. It is a power of 2" << endl;
//             return 0;
//         }
//     }
//     cout << "No. It is not the power of 2" << endl;
//     return 0;
// }

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, n=1;
    cout << "enter a number:" << endl;
    cin >> num;
    for (int i = 0; i <=30; i++)
    {
        if (n == num)
        {
            cout << "yes. It is a power of 2" << endl;
            return 0;
        }
        n*=2;
    }
    cout << "No. It is not the power of 2" << endl;
    return 0;
}