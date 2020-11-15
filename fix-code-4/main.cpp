#include <iostream>
#include <string>
using namespace std;

// Adds all even numbers between low and high, and returns the sum. Does not include high, but does include low.
int SumOfEvenNumbers(int low, int high) {
    int sum = 0;
    for (int i = low; i < high; i++) {
        if (i % 2 == 0) {
        sum += i;
        if (i != (high - 2)) {
        cout << i << " + ";
        }
        else {
          cout << i << " = ";
        }
        }
    }
    return sum;
}

int main() {
    int bottom; // Make this a user input.
    int top;    // Make this a user input.
    cout << "Bottom: ";
    cin >> bottom;
    cout << "Top: ";
    cin >> top;

    // for 10 and 18, this should return 52.
    int even_sum = SumOfEvenNumbers(bottom, top);

    // Do update this section based on what numbers are entered by the user.
    cout << even_sum << endl;
}
