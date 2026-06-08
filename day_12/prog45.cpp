#include <iostream>
using namespace std;

bool pal(string s)
{
    int i = 0, j = s.length() - 1;

    while (i < j)
    {
        if (s[i] != s[j])
            return false;

        i++;
        j--;
    }

    return true;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (pal(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}