#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool simulatePDA(string input) {
 stack<char> pdaStack;
 int i = 0;
 while (i < input.length() && input[i] != 'X') {
 pdaStack.push(input[i]);
 i++;
 }
 if (i == input.length() || input[i] != 'X') {
 return false;
 }
 i++;
 while (i < input.length()) {
 if (pdaStack.empty() || input[i] != pdaStack.top()) {
 return false;
 }
 pdaStack.pop();
 i++;
 }
 return pdaStack.empty();
}
int main() {
 string input;
 cout << "Enter a string in the format wXw^R: ";
 cin >> input;
 if (simulatePDA(input)) {
 cout << "String accepted by the PDA." << endl;
 } else {
 cout << "String rejected by the PDA." << endl;
 }
 return 0;
}
