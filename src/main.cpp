#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Flush after every std::cout / std:cerr
  cout << unitbuf;
  cerr << unitbuf;

  // TODO: Uncomment the code below to pass the first stage
  while (true) {
    cout << "$ ";
    string command;
    cin >> command;
    if (command == 'exit') {
      break;
    };
    cout << command << ": command not found" << endl;
  }
}