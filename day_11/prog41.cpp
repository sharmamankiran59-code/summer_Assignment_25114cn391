#include <iostream>
using namespace std;

int sum(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    cout << "Sum = " << sum(n1, n2);

    return 0;
}