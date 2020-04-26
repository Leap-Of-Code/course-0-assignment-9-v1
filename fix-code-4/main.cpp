#include <iostream>
#include <string>
using namespace std;

// Adds all even numbers between low and high, and returns the sum. Does not include high, but does include low.
int SumOfEvenNumbers(int low, int high) {
    int high_minus_two = high - 2;
    int sum = 0;
    // if even number entered
    if (high % 2 == 0) {
      for (int i = low; i < high_minus_two; i++) {
          if (i % 2 == 0) {
            cout << i << " + ";
            sum += i;
          }
      }
    }

    // if odd number entered
    int high_minus_one = high - 1;
    if (high % 2 == 1) {
      for (int i = low; i < high_minus_one; i++) {
          if (i % 2 == 0) {
            cout << i << " + ";
            sum += i;
          }
      }
    }

  return sum;
}

int main() {
    int bottom = 10; // Make this a user input.
    cout << "Enter a bottom number: " << endl;
    cin >> bottom;
    int top = 18;    // Make this a user input.
    cout << "Enter a top number: " << endl;
    cin >> top;

    // for 10 and 18, this should return 52.
    int even_sum = SumOfEvenNumbers(bottom, top);

    // Do update this section based on what numbers are entered by the user.
   // for (int i = bottom; i < top; i++) {
    //if (i % 2 == 0)
    //cout << "10 + 12 + 14 + 16" << " = ";
    //}
    int top_minus_two = top - 2;
    if (top_minus_two % 2 == 0) {
      even_sum = top_minus_two + even_sum;
      cout << top_minus_two << " = " << even_sum << endl;
    }

    int top_minus_one = top - 1;
    if (top_minus_two % 2 == 1) {
      even_sum = top_minus_one + even_sum;
      cout << top_minus_one << " = " << even_sum << endl;
    }
    
    // cout << " = " << even_sum << endl;
}
