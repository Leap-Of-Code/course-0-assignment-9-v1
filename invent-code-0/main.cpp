#include <iostream>
#include <string>
using namespace std;

void PrintFibonacci (unsigned int length) {
  if (length < 4) {
    cout << "0 1 1 ";
  }
  for (unsigned int output = 1; output <= length; output++ ){
    unsigned result = output + 1;
    cout << "0 1 1 " <<result << " ";
      //for (unsigned int output = 1; output <= length; output+= output){
      //cout << output << " ";
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
