#include <iostream>
#include <string>
using namespace std;

bool FA(string w) {
    int count_a = 0, count_b = 0;
    for (char c : w) {
        if (c == 'a') count_a++;
        else if (c == 'b') count_b++;
    }
    return (count_a % 2 == 0 && count_b % 2 == 0);
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
