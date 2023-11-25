#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i = 0, sum = 0, rem = 0;
    cin >> n;
    while (n != 0)
    {
        if (n < INT32_MAX / 10 || n > INT32_MIN / 10)
        {
            return 0;
        }
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }
    cout << sum << endl;
    return 0;
}