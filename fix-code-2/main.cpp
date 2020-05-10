#include <iostream>
#include <string>
using namespace std;

int main() {
  int i = 0;
  for (int j = 0; j <= 12; j++) {
    cout << "Learning to code is fun."<< endl;
    i = j;
    if (j == 12) {
      cout << "I used loops to print out (Learning code is fun) " << i << " times.";
    }
  } 
  return 0;
}
