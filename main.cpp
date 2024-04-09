#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    string name;
    cout << "Enter you name: ";
    cin >> name;
    welcome(name);
  
    for (int i = 0; i < 3; i++)
    {
        int a, b, c;
        a = generate();
        b = generate();
        c = generate();
        cout << "Choose the game: a) nok, b) progression, c) is_simple?";
        string choice;
        cin >> choice;
        if (choice == "a") {
            int right = nok(a, b, c);
            cout << "Question: " << a << " " << b << " " << c << "\n";
        }
        if (choice == "b") {
            pair<vector, int> p1 = pair<vector, int>(progression(a, b, c));
        }
        int res;
        cout << "Your answer: ";
        cin >> res;
        if (res == right)
        {
            cout << "Correct!" << std::endl;
        }
        else {
            cout << "\'" << res << "\'" << " is wrong answer ;(. Correct answer was " << right << "\n";
            std::cout << "Let\'s try again, " << name << "\n";
        }
    }
}
