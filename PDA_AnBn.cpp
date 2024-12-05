//Design a PDA and write a program for simulating the machine which accepts the
language {anbn where n>0, S= {a, b}}
#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool simulatePDA(string input) {
 stack<char> pdaStack;
 for (char c : input) {
 if (c == 'a') {
 pdaStack.push('a');
 }
 else if (c == 'b') {
 if (pdaStack.empty()) {
 return false;
 }
 pdaStack.pop();
 }
 else {
 return false;
 }
 }
 return pdaStack.empty();
}
int main() {
 string input;
 cout << "Enter a string over {a, b} in the format a^n b^n: ";
 cin >> input;
 if (simulatePDA(input)) {
 cout << "String accepted by the PDA." << endl;
 }
 else {
 cout << "String rejected by the PDA." << endl;
 }
 return 0;
}
