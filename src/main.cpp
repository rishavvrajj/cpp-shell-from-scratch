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
    if (command == "exit") {
      break;
    } else if (command.substr(0, 5) == "echo ") {
      std::cout << command.substr(5) << std::endl;
    } else {
      std::cout << command << ": command not found" << std::endl;
    }
  }
}