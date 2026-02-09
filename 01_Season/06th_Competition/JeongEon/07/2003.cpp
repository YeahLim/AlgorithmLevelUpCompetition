// 백준 알고리즘 스터디 6회차
// 문제 번호: 2003번
// 문제 이름: 수들의 합 2
// 알고리즘: 투 포인터
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
	int N;	// 수열의 크기
	int M;	// 합 기준
	cin >> N >> M;

	int input;
	vector<int> arr;
	arr.push_back(0);
	for (int i = 1; i <= N; i++) {
		cin >> input;
		arr.push_back(input + arr[i - 1]);
	}

	// 로직
	int cnt = 0;
	int ptr1 = 0;
	int ptr2 = 0;
	while (ptr2 <= N && ptr1 <= N) {
		int sum = arr[ptr2] - arr[ptr1];

		if (sum < M) {
			ptr2++;
		}
		else if (sum >= M) {
			if (sum == M) {
				cnt++;
			}
			ptr1++;
		}
	}


	// 출력) 경우의 수
	cout << cnt;

	return 0;
}