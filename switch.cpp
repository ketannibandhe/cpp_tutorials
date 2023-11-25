#include <iostream>
using namespace std;
int main()
{
    int n, f = 0, t = 0, h = 0, m, fif = 0, tw = 0, ten = 0, one = 0, choice;
    cin >> n;
    m = n;
    while (n != 0)
    {
        cout << "enter your choice for " << n << " Rs" << endl;
        cin >> choice;
        switch (choice)
        {
        case 500:
            fif = fif + n / 500;
            n = n % 500;
            break;

        case 200:
            t = t + n / 200;
            n %= 200;
            break;

        case 100:
            h = h + n / 100;
            n %= 100;
            break;

        case 50:
            f += n / 50;
            n %= 50;
            break;

        case 20:
            tw += n / 20;
            n %= 20;
            break;

        case 10:
            ten += n / 10;
            n %= 10;
            break;

        case 1:
            one += n / 1;
            n %= 1;
            break;
        }
    }
    cout << m << "Rs contains\n" << fif << " 500 rs notes\n" << t << " 200 rs notes\n" << h << " 100 rs notes\n";
    cout << f << " 50 rs notes\n" << tw << " 20 rs notes\n" << ten << " 10 rs notes\n" << one << " 1 rs notes" << endl;
    return 0;
}