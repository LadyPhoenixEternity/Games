#include <iostream>
#include <vector>
#include <utility>
#include "lib.h"
#include "nok.h"
#include "progression.h"
#include "is_simple.h"

using namespace std;

int main() {
    string name;
    cout << "Enter you name: ";
    cin >> name;
    welcome(name);
  
    for (int i = 0; i < 3; i++)
    {
        int a, b, c;
        a = generate_a();
        b = generate_b();
        c = generate_c(a);
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
            cout << "Question: ";
            for (int i=0; i<a; i++) {
                if (i!=missing) std::cout << prog[i] << " ";
                else {
                    x=prog[i];
                    cout << ".." << " ";
                }
            }
        }
        if (choice == "c") {
            cout << "Is this number simple: " << a << "?\n";
            bool f = is_simple(a);
            string right;
            if (f == true)
                right = "yes";
            if (f == false)
                right = "no";
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
