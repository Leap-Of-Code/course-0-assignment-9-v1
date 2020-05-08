#include <iostream>
#include <string>
using namespace std;

void PrintMagicNumber (unsigned int length) {
  if (length == 0) {
    cout << length;
  }
  if (length == 1 || length == 2)
    cout << "1";
  for (unsigned int output = 0; output <= length; output += output ){
    cout << output << " ";
  }
}


int main() {
  unsigned int length;
  cout << "Enter how many numbers of the Fibonacci sequence you would like to print out: ";
  cin >> length;
  PrintMagicNumber(length);
  // Write code here.
  // Hint check for special cases when length < 2
  return 0;
}
