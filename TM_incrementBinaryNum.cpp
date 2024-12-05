#include <iostream>
#include <string>
using namespace std;

// Function to increment a binary number represented as a string
string incrementBinary(string binary) {
    int n = binary.length();
    bool carry = true; // Start with a carry to add 1
    
    // Traverse the binary string from right to left
    for (int i = n - 1; i >= 0; i--) {
        if (binary[i] == '1' && carry) {
            binary[i] = '0'; // Flip 1 to 0 and propagate carry
        } else if (binary[i] == '0' && carry) {
            binary[i] = '1'; // Flip 0 to 1, resolve carry
            carry = false;   // No further carry needed
        }
    }
    
    // If carry is still true, prepend '1' to handle overflow
    if (carry) {
        binary = '1' + binary;
    }
    
    return binary;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    string incrementedBinary = incrementBinary(binary);
    cout << "Incremented binary number: " << incrementedBinary << endl;

    return 0;
}
