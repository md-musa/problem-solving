#include "iostream"
using namespace std;

int main() {
  string encrypted;
  string command;
  int initPosition;
  cin >> encrypted >> initPosition >> command;
  string decrypted;

  for (int i = 0; i < command.length(); i++) {
    if (command[i] == 'L')
      initPosition--;
    else if (command[i] == 'R')
      initPosition++;
    else if (command[i] == '+')
      decrypted += encrypted[initPosition - 1];
  }

  cout << decrypted << endl;

  return 0;
}
