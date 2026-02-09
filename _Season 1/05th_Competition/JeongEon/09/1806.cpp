// 백준 알고리즘 스터디 5회차
// 문제 번호: 1806번
// 문제 이름: 부분합
// 알고리즘: 투 포인터
// 작성일: 24.02.23

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	int N;	// 수열 길이
	int S;	// 합
	cin >> N >> S;
	// 0 1 2 3  4  5  5  7  8  9 10
	// 0 1 3 6 10 15 20 27 35 44 54

	int input;
	vector<int> arr;
	for (int i = 0; i < N; i++) {
		cin >> input;
		arr.push_back(input);
	}

	int start = 0, end = 0, sum = 0, minLen = 0x7FFFFFF;
	while (start <= end) {
		if (sum >= S) {
			minLen = min(minLen, end - start);
			sum -= arr[start++];
		}
		else if (end == N) {
			break;
		}
		else {
			sum += arr[end++];
		}
	}

	if (minLen == 0x7FFFFFF) {
		cout << 0;
	}
	else {
		cout << minLen;
	}

	return 0;
}
