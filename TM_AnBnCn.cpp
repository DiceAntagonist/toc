#include <iostream>
using namespace std;

bool turingMachine(string tape) {
    tape = "_" + tape + "_"; // Add blank symbols
    int head = 1;
    int length = tape.length();

    while (true) {
        // Check for completion
        bool completed = true;
        for (int i = 1; i < length - 1; i++) {
            if (tape[i] == 'a' || tape[i] == 'b' || tape[i] == 'c') {
                completed = false;
                break;
            }
        }
        if (completed) return true; // Accept if all symbols are marked

        // Process 'a'
        if (tape[head] == 'a') {
            tape[head] = 'X';
            int num = -1;
            for (int i = head + 1; i < length; i++) {
                if (tape[i] == 'b') {
                    num = i;
                    break;
                }
            }
            if (num == -1) return false; // Reject if no 'b' found

            // Process 'b'
            tape[num] = 'Y';
            int num2 = -1;
            for (int i = num + 1; i < length; i++) {
                if (tape[i] == 'c') {
                    num2 = i;
                    break;
                }
            }
            if (num2 == -1) return false; // Reject if no 'c' found

            // Process 'c'
            tape[num2] = 'Z';
            for (int i = num2 - 1; i > 0; i--) {
                if (tape[i] == 'X') {
                    head = i + 1; // Move head to next unprocessed 'a'
                    break;
                }
            }
        } else {
            return false; // Reject if invalid character
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (turingMachine(input)) {
        cout << "String accepted!" << endl;
    } else {
        cout << "String rejected!" << endl;
    }

    return 0;
}
