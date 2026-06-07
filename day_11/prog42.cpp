#include <iostream>
using namespace std;

int maximum(int n1, int n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}

int main()
{
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    cout << "Maximum = " << maximum(n1, n2);

    return 0;
}