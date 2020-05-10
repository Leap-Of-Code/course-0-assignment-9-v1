#include <iostream>
#include <string>
using namespace std;

void Factorial(int value) {
    if (value == 0) {
      cout << "The factorial of 0 is 1." << endl;
    }
    long long result = 1;
    for (int i = 1; i <= 15; i++) {
        result = result * i;
        cout << "The factorial of " << i << " is " << result << endl; 
      }
    } 

int main() {
    //for (int value = 0; value <= 15; value++){
      int value = 0;
      Factorial(value);
    } 
