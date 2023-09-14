#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "enter a number" << endl;
    cin >> n;
    for (i = 0; i < ((n / 2) + 1); i++)
    {
        if (i * i == n)
        {
            cout << "square" << endl;
        }
        return 0;
    }
        
    // }
    // while(i < ((n / 2) + 1)){
    //     if (i * i == n)
    //     {
    //         cout << "square" << endl;
    //         break;
    //     }
    //     i++;
    // }
    
    return 0;
}
