// 22회차 알고리즘 스터디
// 백준 실버 4
// 1065. 한수

#include <iostream>

using namespace std;

bool hansoo(int a) {
    if (a < 100) {
        return true;
    }

    int a1, a2, a3;

    a3 = a / 100;
    a1 = a % 10;
    a2 = a % 100 / 10;

    if (a3 - a2 == a2 - a1) {
        return true;
    }

    return false;
}

int main(void) {
    int N, count = 0;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (hansoo(i)) {
            count++;
        }
    }

    cout << count;
}