#include <iostream>
#include <string>
using namespace std;

// Simulates FA1: Accepts strings of even length
bool simulateFA1(string input) {
    return input.length() % 2 == 0;
}

// Simulates FA2: Accepts strings that end with 'a'
bool simulateFA2(string input) {
    if (input.empty()) return false;
    return input.back() == 'a';
}

// Simulates intersection of FA1 and FA2
bool simulateIntersection(string input) {
    return simulateFA1(input) && simulateFA2(input);
}

int main() {
    string testStrings[] = {"aa", "ab", "ba", "a", "b", "aaaa", "aab", ""};

    for (string test : testStrings) {
        if (simulateIntersection(test)) {
            cout << "String \"" << test << "\" is accepted." << endl;
        } else {
            cout << "String \"" << test << "\" is rejected." << endl;
        }
    }

    return 0;
}
