#include <iostream>
#include <string>
using namespace std;

// Adds all even numbers between low and high, and returns the sum. Does not include high, but does include low.
int SumOfEvenNumbers(int low, int high) {
    int sum = 0;
    for (int i = low; i < high; i++) {
      if (i % 2 == 0 ) {
        sum += i;
      }
    }
    return sum;
}

void PrintNumberEquation(int low, int high) {
  for (int i = low; i < high; i++) {
    if (i % 2 == 0 && i == (high - 2)) {
      cout << i << " = ";
    } else if (i % 2 == 0) {
      cout << i << " + ";
    }
  }
}

int main() {
    int bottom; //= 10; // Make this a user input.
    int top; // = 18;    // Make this a user input.
    cout << "Enter a number: ";
    cin >> bottom;
    cout << "Enter a number higher than previous number: ";
    cin >> top;

    // for 10 and 18, this should return 52.
    int even_sum = SumOfEvenNumbers(bottom, top);

    // Do update this section based on what numbers are entered by the user.
    PrintNumberEquation(bottom, top);
    cout << even_sum << endl;
}
