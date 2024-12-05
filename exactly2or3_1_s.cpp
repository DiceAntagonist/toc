// Function to simulate the FA for exactly two or three '1's
#include <iostream>
#include <string>
using namespace std;


bool FA(string w) {  
    int state = 0;  

  
    for (int i = 0; i < w.length(); i++) {
        char c = w[i];  

        switch (state) {
            case 0:
                if (c == '1') state = 1;  
                break;
            case 1:
                if (c == '1') state = 2;  
                else state = 1;  
                break;
            case 2:
                if (c == '1') state = 3;  
                else state = 2;  
                break;
            case 3:
                if (c == '1') state = 4; 
                else state = 3;
                break;
            case 4:
                return false;
        }
    }

 
    return (state == 2 || state == 3);
}

int main() {
    string w;
    cout << "Enter a binary string: ";
    cin >> w;

    if (FA(w)) {
        cout << "String accepted " << endl;
    } else {
        cout << "String rejected." << endl;
    }

    return 0;
}
