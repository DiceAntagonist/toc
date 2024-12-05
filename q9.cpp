#include <iostream>
using namespace std;

bool turingMachine(string tape) {
    tape = "_" + tape + "_";
    int head = 1;
    int state = 0;
    int length = tape.length();

    while (true) {
        switch (state) {
            case 0:
                if (tape[head] == 'a') {
                    tape[head] = 'X';
                    state = 1;
                    head++;
                } else if (tape[head] == '_') {
                    state = 6;
                } else {
                    return false;
                }
                break;

            case 1:
                if (tape[head] == 'a') {
                    head++;
                } else if (tape[head] == 'b') {
                    tape[head] = 'Y';
                    state = 2;
                    head++;
                } else {
                    return false;
                }
                break;

            case 2:
                if (tape[head] == 'b') {
                    head++;
                } else if (tape[head] == 'c') {
                    tape[head] = 'Z';
                    state = 3;
                    head--;
                } else {
                    return false;
                }
                break;

            case 3:
                if (tape[head] == 'X' || tape[head] == 'Y' || tape[head] == 'Z') {
                    head--;
                } else if (tape[head] == '_') {
                    state = 0;
                    head++;
                } else {
                    return false;
                }
                break;

            case 6:
                for (char c : tape) {
                    if (c != 'X' && c != 'Y' && c != 'Z' && c != '_') {
                        return false;
                    }
                }
                return true;
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
