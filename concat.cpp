#include <iostream>
#include <string>
using namespace std;

// Simulates FA1: Accepts strings starting with 'a'
bool simulateFA1(string input) {
    if (input.empty()) return false;
    return input[0] == 'a';
}

// Simulates FA2: Accepts strings ending with 'b'
bool simulateFA2(string input) {
    if (input.empty()) return false;
    return input.back() == 'b';
}

// Simulates concatenation of FA1 and FA2
bool simulateConcatenation(string input) {
    for (int i = 1; i < input.length(); ++i) {
        string prefix = input.substr(0, i);  // First part of the string
        string suffix = input.substr(i);    // Second part of the string

        if (simulateFA1(prefix) && simulateFA2(suffix)) {
            return true; // Return true if both parts satisfy the conditions
        }
    }
    return false; // Return false if no valid split is found
}

int main() {
    string testStrings[] = {"ab", "aab", "abb", "b", "abbbb", "aaa", "a"};

    for (string test : testStrings) {
        if (simulateConcatenation(test)) {
            cout << "String \"" << test << "\" is accepted." << endl;
        } else {
            cout << "String \"" << test << "\" is rejected." << endl;
        }
    }

    return 0;
}
