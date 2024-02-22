// 백준 알고리즘 스터디 5회차
// 문제 번호: 2470번
// 문제 이름: 두용액
// 알고리즘: 투 포인터
// 작성일: 24.02.22 22시 25분 ~ 24.02.22

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	int N;	// 전체 용액 수
	cin >> N;

	int input;
	vector<int> arr;	// 용액
	for (int i = 0; i < N; i++) {
		cin >> input;
		arr.push_back(input);
	}
	sort(arr.begin(), arr.end());

	int start = 0;
	int end = N - 1;
	int result[2];
	int sum = 2000000000;
	while (start < end) {
		if (abs(arr[start] + arr[end]) < sum) {
			sum = abs(arr[start] + arr[end]);
			result[0] = arr[start];
			result[1] = arr[end];

			if (sum == 0) {
				break;
			}
		}

		if (arr[start] + arr[end] < 0) {
			start++;
		}
		else {
			end--;
		}
	}

	cout << result[0] << " " << result[1];

	return 0;
}
