
#include <iostream>
#include <string>
using namespace std;
string incrementBinary(string input) {
 int i = input.length() - 1;
 while (i >= 0 && input[i] == '1') {
 input[i] = '0';
 i--;
 }
 if (i >= 0) {
 input[i] = '1';
 }
 else {
 input = '1' + input;
 }
 return input;
}
int main() {
 string input;
 cout << "Enter a binary number: ";
 cin >> input;
 string result = incrementBinary(input);
 cout << "Binary number incremented by 1: " << result << endl;
 return 0;
}
