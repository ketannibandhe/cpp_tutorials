#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i = 0, digit = 0, ans = 0,sum=0;
    cout << "Enter a number:";
    cin >> n;
    while (n != 0)
    {
        int bit = n & 1;
        // why we have taken & with 1 because
        // 1&1-->1
        // 0&1-->0
        // to print same number in binary one by one
        // ans = (bit * pow(10, i)) + ans;
        sum=sum*10+ans ;// used to print the digit in reverse order
        n = n >> 1;
        i++;
    }
    cout <<"binary :" << sum << endl;
    return 0;
}