// 알고리즘 스터디 21회차
// 백준 골드5
// 11729 하노이 탑 이동 순서

#include <iostream>

using namespace std;

void hanoi(int n, int start, int to, int bypass) {
    if (n == 1) {
        cout << start << " " << to << '\n';
    }
    else {
        hanoi(n - 1, start, bypass, to);
        cout << start << " " << to << '\n';
        hanoi(n - 1, bypass, to, start);
    }
}

int main() {
    int num;
    cin >> num;
    cout << (1 << num) - 1 << "\n";
    hanoi(num, 1, 3, 2);
}