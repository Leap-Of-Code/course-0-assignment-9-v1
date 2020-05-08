#include <iostream>
#include <string>
using namespace std;

void PrintFibonacci (unsigned int length) {
  unsigned int result_2 = 1;
  unsigned int result_1 = 0;

  for (unsigned int output = 1; output <= length; output++ ){
    if (output == 1) {
      cout << result_1 << " ";
      output++;
    }
    if (output == 2 && length > 1) {
      cout << result_2 << " ";
      output++;
    }
    if (output > 2 && length > 2) {
      int result = result_1 + result_2;
      cout << result << " ";
    result_1 = result_2;
    result_2 = result;
    }
  }
}

int main() {
  unsigned int length;
  cout << "Enter how many numbers of the Fibonacci sequence you would like to print out: ";
  cin >> length;
  PrintFibonacci(length);
  // Write code here.
  // Hint check for special cases when length < 2
  return 0;
}