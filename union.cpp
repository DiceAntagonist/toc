#include <iostream>
#include <string>
using namespace std;

// Simulates FA1: Accepts strings starting with 'a'
bool simulateFA1(string input) {
    if (input.empty()) return false;
    return input[0] == 'a';
}

// Simulates FA2: Accepts strings starting with 'b'
bool simulateFA2(string input) {
    if (input.empty()) return false;
    return input[0] == 'b';
}

// Simulates union of FA1 and FA2
bool simulateUnion(string input) {
    return simulateFA1(input) || simulateFA2(input);
}

int main() {
    string testStrings[] = {"a", "b", "ab", "ba", "c", ""};
    
    for (string test : testStrings) {
        if (simulateUnion(test)) {
            cout << "String \"" << test << "\" is accepted." << endl;
        } else {
            cout << "String \"" << test << "\" is rejected." << endl;
        }
    }

    return 0;
}
