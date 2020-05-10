#include <iostream>
#include <string>
using namespace std;

bool IsPrimeNumber(unsigned int input) {
  for (unsigned int i = 2; i < input && input % i == 0; i++) {
    return false;
    }
  return true;
}

int main() {
  int streak = 0;
  for (bool prime_number = true; prime_number == true;) {
    unsigned int input;
    cout << "Enter a positive integer: ";
    cin >> input;

    prime_number = IsPrimeNumber(input);
    if (prime_number) {
      cout << "Yes! " << input << " is a magic number!" << endl;
      streak++;
    } else {
      cout << "Aww! " << input << " is not a magic number!" << endl;
    }
  }

  cout << "Your streak is: " << streak << endl;
  if (streak == 0) {
    cout << "Hmm, you could use some practice at guessing magic numbers!" << endl;
  } else if (streak < 3) {
    cout << "Not bad for a beginner!" << endl;
  } else if (streak < 7) {
    cout << "Have you considered you might be a genius!" << endl;
  } else if (streak < 10) {
    cout << "This should be impossible!" << endl;
  } else {
    cout << "Do this many numbers even exist? You must be cheating!" << endl;
  }

  return 0;
}
