#include <iostream>
#include <string>
using namespace std;

int main() {
  // This code prints out all the even numbers from 0 to 100 inclusively.
  for (int counter = 0; counter <= 100; counter++) {
    if (counter % 2 == 0) {
    cout << "Counter: " << counter << endl;
    }
  }
  return 0;
}