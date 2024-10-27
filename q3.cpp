#include <iostream>
#include <string>
using namespace std;

bool FA(string w) {
    int n = w.length();
    if (n < 4) return false;
    return (w[0] == w[n - 2] && w[1] == w[n - 1]);
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
