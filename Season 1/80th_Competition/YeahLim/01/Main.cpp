#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string pattern;
    cin >> pattern;

    for (int i = 0; i < n; i++) {
        string next;
        cin >> next;

        for (int j = 0; j < next.size(); j++) {
            if (pattern[j] != next[j]) {
                pattern[j] = '?';
            }
        }
    }

    cout << pattern;
}