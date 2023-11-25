#include <iostream>
using namespace std;
int main()
{
    int m, n, mask = 0;
    cin >> n;
    m = n;
    if (n == 0)//edge case
    {
        return 1;
    }
    while (m != 0)
    {
        m = m >> 1;//leftshift the number untill we don't get 0000000...000 
        mask = (mask << 1) | 1;
    }
    int ans = (~n) & mask;
    cout << ans;
    return 0;
}