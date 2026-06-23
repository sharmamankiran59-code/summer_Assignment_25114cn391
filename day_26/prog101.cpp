#include <iostream>
using namespace std;

int main() {
    int num, guess;

    cout << "Enter the secret number: ";
    cin >> num;

    cout << "\n===== Number Guessing Game =====\n";// 4 times ==== is used to make the output look better and more attractive

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > num)
            cout << "Too High! Try Again.\n";
        else if (guess < num)
            cout << "Too Low! Try Again.\n";
        else
            cout << "Congratulations! You guessed the correct number.\n";

    } while (guess != num);

    return 0;
}