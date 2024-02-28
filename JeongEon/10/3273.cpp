// 백준 알고리즘 스터디 6회차
// 문제 번호: 3273번
// 문제 이름: 두 수의 합
// 알고리즘: 투포인터
// 작성일: 24.02.28

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	int n;	// 수열 크기
	cin >> n;

	int input;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		cin >> input;
		arr.push_back(input);
	}

	sort(arr.begin(), arr.end());

	int x;	// 비교 수
	cin >> x;

	// 로직
	int start = 0;
	int end = n - 1;
	int cnt = 0;
	while (start < end && end < n) {
		int sum = arr[start] + arr[end];

		if (sum == x) {
			cnt++;
			start++;
			end--;
		}
		else if (sum < x) {
			start++;
		}
		else if (sum > x) {
			end--;
		}
	}

	// 출력
	cout << cnt;

	return 0;
}