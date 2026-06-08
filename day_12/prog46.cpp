#include <iostream>
using namespace std;

bool arm(int n)
{
    int t = n, r, s = 0;

    while (t > 0)
    {
        r = t % 10;
        s = s + r * r * r;
        t = t / 10;
    }

    return s == n;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (arm(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}