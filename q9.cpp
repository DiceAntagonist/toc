#include <iostream>
#include <string>
using namespace std;
bool simulateTM(string input) {
 int i = 0;
 while (true) {
 while (i < input.length() && input[i] != 'a') i++;
 if (i == input.length()) break;
 input[i] = 'X';
 i++;
 while (i < input.length() && input[i] != 'b') i++;
 if (i == input.length()) return false;
 input[i] = 'Y';
 i++;
 while (i < input.length() && input[i] != 'c') i++;
 if (i == input.length()) return false;
 input[i] = 'Z';
 i = 0;
 }
 for (char c : input) {
 if (c == 'a' || c == 'b' || c == 'c') return false;
 }
 return true;
}
int main() {
 string input;
 cout << "Enter a string in the format a^n b^n c^n: ";
 cin >> input;
 if (simulateTM(input)) {
 cout << "String accepted by the Turing Machine." << endl;
 }
 else {
 cout << "String rejected by the Turing Machine." << endl;
 }
 return 0;
}
