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
     cout << "Question: " << ' ' << a << ' ' << b << ' ' << c << "\n";
     int lcm = nok(a, b, c);
     int res;
     cout << "Your answer: ";
     cin >> res;
     if (res == lcm)
     {
         cout << "Correct!" << std::endl;
     }
     else {
         cout << "\'" << res << "\'" << " is wrong answer ;(. Correct answer was " << lcm << "\n";
         std::cout << "Let\'s try again, " << name << "\n";
     }
   }
}
