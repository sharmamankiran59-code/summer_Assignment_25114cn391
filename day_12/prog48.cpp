#include <iostream>
using namespace std;

bool perfect(int n)
{
    int s = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            s = s + i;
    }

    return s == n;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (perfect(n))
        cout << "Perfect Number";
    else
        cout << "Not Perfect Number";

    return 0;
}