#include <iostream>
#include <string>
using namespace std;

bool IsMagicNumber(unsigned int input) {
  // if input is not divisible by i, it is a magic #. i increases until the value is one less than input
  for (unsigned int i = 2; i < input; i++) {
    if (input % i == 0) {
      return false;
    }
  }
  return true;
}


int main() {
  bool not_divisible_by_i = true;
  int streak = 0;
  while (not_divisible_by_i) {
    unsigned int input;
    cout << "Enter a positive integer: ";
    cin >> input;

    not_divisible_by_i = IsMagicNumber(input);
    if (not_divisible_by_i) {
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
