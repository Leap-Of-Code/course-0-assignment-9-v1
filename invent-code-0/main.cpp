#include <iostream>
#include <string>
using namespace std;

int main() {
  int length;
  cout << "Enter how many numbers of the Fibonacci sequence you would like to print out: ";
  cin >> length;

  // special case if length is 3 or less
  if (length == 1) {
    cout << "0";
  } else if (length == 2) {
    cout << "0 1";
  } else if (length == 3) {
    cout << "0 1 1";
  }

  // if length is 3 or more.. 
  if (length > 3) {
    cout << "0 1 1";
    int result = 1;
    int previous_result = 1;
    for (int i = 2; i <= (length - 2); i++) { 
      result = result + previous_result;
      previous_result = result - previous_result;
      cout << " " << result;
    }
  }
  return 0;
}
