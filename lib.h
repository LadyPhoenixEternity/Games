#include <ctime>
#include <string>

using namespace std;

void welcome(string name)
{
  cout << "Welcome to the Brain Games!" << "\n";
  cout << "May I have your name?" << "\n";
  cout << "Hello, " + name + "!" << "\n";
  
}

int generate() {
  
  return rand() % 10 + 1;
}
