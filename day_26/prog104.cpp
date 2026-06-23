#include <iostream>
using namespace std;

int main() {
    int ch, score = 0;

    cout << "===== General Knowledge Quiz =====\n";

    cout << "\nQ1. Who is known as the Father of the Nation in India?";
    cout << "\n1. Mahatma Gandhi";
    cout << "\n2. Jawaharlal Nehru";
    cout << "\n3. Subhash Chandra Bose";
    cout << "\n4. Bhagat Singh";
    cout << "\nEnter answer: ";
    cin >> ch;

    if (ch == 1)
        score++;

    cout << "\nQ2. Which planet is known as the Red Planet?";
    cout << "\n1. Earth";
    cout << "\n2. Mars";
    cout << "\n3. Jupiter";
    cout << "\n4. Venus";
    cout << "\nEnter answer: ";
    cin >> ch;

    if (ch == 2)
        score++;

    cout << "\nQ3. Which is the largest ocean in the world?";
    cout << "\n1. Indian Ocean";
    cout << "\n2. Atlantic Ocean";
    cout << "\n3. Pacific Ocean";
    cout << "\n4. Arctic Ocean";
    cout << "\nEnter answer: ";
    cin >> ch;

    if (ch == 3)
        score++;

    cout << "\n===== Quiz Result =====";
    cout << "\nYour Score: " << score << "/3";

    if (score == 3)
        cout << "\nYou are a Quiz Master!";
    else if (score == 2)
        cout << "\nVery Good!";
    else if (score == 1)
        cout << "\nKeep Practicing!";
    else
        cout << "\nTry Again!";

    return 0;
}