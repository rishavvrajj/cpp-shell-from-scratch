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

    string input;
    getline(cin, input);

    string command = input.substr(0, input.find(" "));

    string parameters = input.substr(intput.find(' ') + 1);

    if (command == "exit") {
      break;
    };

    if (command == "echo") {
      cout << parameters << endl;
    } else if (command == "type") {
      if (parameters == "echo" || parameters == "exit" || parameters == "type") {
        cout << parameters << " is a shell builtin" << endl;
      } else {
        cout << parameters << ": not found" << endl;
      }
    } else {
      cout << command << ": command not found" << endl;
    }
  }
}