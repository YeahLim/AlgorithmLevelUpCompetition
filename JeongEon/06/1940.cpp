// 백준 알고리즘 스터디 6회차
// 문제 번호: 1940번
// 문제 이름: 주몽
// 알고리즘: 투 포인터
// 작성일: 24.02.27

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	int N;	// 갑옷을 만들 재료 개수
	cin >> N;

	int M;	// 갑옷을 만들기 위해 필요한 고유 번호
	cin >> M;

	int input;
	vector<int> arr;
	for (int i = 0; i < N; i++) {
		cin >> input;
		arr.push_back(input);
	}

	// 로직
	sort(arr.begin(), arr.end());

	int ptr1 = 0;
	int ptr2 = N - 1;
	int cnt = 0;
	while (ptr1 < ptr2) {
		if (arr[ptr1] + arr[ptr2] > M) {
			ptr2--;
		}
		else if (arr[ptr1] + arr[ptr2] < M) {
			ptr1++;
		}
		else if (arr[ptr1] + arr[ptr2] == M) {
			cnt++;
			ptr1++;	ptr2--;
		}
	}

	// 출력
	cout << cnt;

	return 0;
}