#include <iostream>
#include <vector>
#include <utility>
#include "lib.h"
#include "nok.h"
#include "progression.h"

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
            vector<int> prog = p1.first;
            int missing = p1.second;
            int right = p1.second;
            int x;
            std::cout << "Question: ";
            for (int i=0; i<a; i++) {
                if (i!=missing) std::cout << prog[i] << " ";
                else {
                    x=prog[i];
                    std::cout << ".." << " ";
                }
            }
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
