#include <ctime>
#include <string>

using namespace std;

void welcome(string name)
{
  cout << "Welcome to the Brain Games!" << "\n";
  cout << "May I have your name?" << "\n";
  cout << "Hello, " + name + "!" << "\n";
  
}

int generate_a() {
  
  return rand() % 10 + 5;
}

int generate_b() {
  
  return rand() % 5 + 2;
}

int generate_c(int a) {
  
  return rand() % a + 1;
}
