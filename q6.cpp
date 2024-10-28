#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 10;

void Input(string arr[], int& n) {
    cout << "Enter the number of elements (up to " << MAX_SIZE << "): ";
    cin >> n;
    if (n > MAX_SIZE) n = MAX_SIZE; 

    cout << "Enter the elements separated by spaces: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int union_FA(string L1[], int n1, string L2[], int n2, string result[]) {
    int index = 0;
    for (int i = 0; i < n1; i++) {
        result[index++] = L1[i];
    }
    for (int j = 0; j < n2; j++) {
        bool found = false;
        for (int k = 0; k < n1; k++) {
            if (L2[j] == L1[k]) {
                found = true;
                break;
            }
        }
        if (!found) {
            result[index++] = L2[j];
        }
    }
    return index;
}

int intersection_FA(string L1[], int n1, string L2[], int n2, string result[]) {
    int index = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (L1[i] == L2[j]) {
                bool found = false;
                for (int k = 0; k < index; k++) {
                    if (result[k] == L1[i]) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    result[index++] = L1[i];
                }
            }
        }
    }
    return index;
}

int concatenation_FA(string L1[], int n1, string L2[], int n2, string result[]) {
    int index = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            result[index++] = L1[i] + L2[j];
        }
    }
    return index;
}

void printResult(string result[], int n, const string& operation) {
    cout << operation << ": ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    string L1[MAX_SIZE], L2[MAX_SIZE];
    int n1, n2;

    cout << "Enter language L1 elements:" << endl;
    Input(L1, n1);

    cout << "Enter language L2 elements:" << endl;
    Input(L2, n2);

    string union_result[MAX_SIZE * 2];
    string intersection_result[MAX_SIZE];
    string concatenation_result[MAX_SIZE * MAX_SIZE];

    int union_count = union_FA(L1, n1, L2, n2, union_result);
    int intersection_count = intersection_FA(L1, n1, L2, n2, intersection_result);
    int concatenation_count = concatenation_FA(L1, n1, L2, n2, concatenation_result);

    printResult(union_result, union_count, "Union of L1 and L2");
    printResult(intersection_result, intersection_count, "Intersection of L1 and L2");
    printResult(concatenation_result, concatenation_count, "Concatenation of L1 and L2");

    return 0;
}
