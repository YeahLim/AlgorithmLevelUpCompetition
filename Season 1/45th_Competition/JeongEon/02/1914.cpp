#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int N;
string result;

void hanoi(int start, int tmp, int end, int n) {
    if (n == 1) {
        cout << start << " " << end << "\n";
        return;
    }

    hanoi(start, end, tmp, n - 1);
    cout << start << " " << end << "\n";
    hanoi(tmp, start, end, n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    result = to_string(pow(2, N));
    result = result.substr(0, result.find('.'));
    result[result.size() - 1] -= 1;

    cout << result << "\n";
    if (N <= 20) {
        hanoi(1, 2, 3, N);
    }

    return 0;
}
