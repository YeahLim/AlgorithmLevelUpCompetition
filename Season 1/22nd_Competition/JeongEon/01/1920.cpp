// 22회차 알고리즘 스터디
// 백준 실버 4
// 1920. 수찾기

#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int arr[100010];

void binarySearch(int key) {
    int start = 0;
    int end = N - 1;
    int mid;

    while (end >= start) {
        mid = (start + end) / 2;
        if (arr[mid] == key) {
            cout << 1 << "\n";
            return;
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    cout << 0 << "\n";
    return;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        arr[i] = input;
    }

    sort(arr, arr + N);

    cin >> M;
    for (int i = 0; i < M; i++) {
        long long int input;
        cin >> input;
        binarySearch(input);
    }

    return 0;
}