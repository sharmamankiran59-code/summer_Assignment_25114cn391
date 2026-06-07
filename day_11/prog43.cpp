#include <iostream>
using namespace std;

bool prime(int n)//bool is a data type that can hold only two values true or false
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (prime(n))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}