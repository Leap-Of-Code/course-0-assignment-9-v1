#include <iostream>
#include <string>
using namespace std;

// Adds all even numbers between low and high, and returns the sum. Does not include high, but does include low.
void SumOfEvenNumbers(int low, int high) {
    int sum = 0;
    for (int i = low; i < high; i++) {
        if (i % 2 == 0) {
          sum = sum + i;
          cout << i << "+";
        }
    }
    cout << '\b';
    cout << "=" << sum;
}

int main() {
    int bottom = 0; // Make this a user input.
    int top = 0; 
    cout << " what is your low number?";
    cin >> bottom;
    cout << " what is your top number?";
    cin >> top;
   // Make this a user input.

    // for 10 and 18, this should return 52.
    SumOfEvenNumbers(bottom, top);

    // Do update this section based on what numbers are entered by the user.
    //cout << "10 + 12 + 14 + 16" << " = ";
    //cout << even_sum << endl;
}