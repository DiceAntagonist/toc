//q4
#include <iostream>
#include <string>
using namespace std;

bool FA(string w) {
    int n = w.length();
    return (n >= 2 && w[0] == 'a' && w[n - 1] == 'b');
}

int main() {
    string w;
    cout << "Enter a string over {a, b}: ";
    cin >> w;

    if (FA(w)) {
        cout << "String accepted" << endl;
    } else {
        cout << "String rejected" << endl;
    }

    return 0;
}
