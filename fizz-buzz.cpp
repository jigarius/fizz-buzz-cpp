#include <iostream>
#include <stdlib.h>

using namespace std;

string fizz_buzz_number(int n) {
  string result;
  
  if (n % 3 == 0) {
    result += "fizz";
  }

  if (n % 5 == 0) {
    result += "buzz";
  }

  if (result != "") {
    return result;
  }

  return to_string(n);
}

string fizz_buzz_range(int till) {
  till = max(0, till);

  string result = "";
  for (int i = 1; i <= till; i++) {
      result += fizz_buzz_number(i) + "\n";
  }

  return result;
}

int main(int argc, char **argv) {
  if (argc < 2) {
    cerr << "Required argument missing. Aborting.\n";
    return 1;
  }

  int n;

  try {
    n = stoi(argv[1]);
  }
  catch(invalid_argument const& ex) {
    cerr << "Invalid argument.";
    return 1;
  }

  cout << fizz_buzz_range(n);

  return 0;
}