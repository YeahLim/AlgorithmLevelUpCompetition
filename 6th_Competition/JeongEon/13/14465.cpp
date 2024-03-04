// 백준 알고리즘 스터디 6회차
// 문제 번호: 14465번
// 문제 이름: 소가 길을 건너간 이유 5
// 알고리즘: 슬라이딩 윈도우
// 작성일: 24.03.01

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	int N;	// 신호등 개수
	int K;	// 켜놓고 싶은 신호등 개수
	int B;	// 고장난 신호등 개수
	cin >> N >> K >> B;

	int num;
	vector<int> Light(N + 1);
	Light.push_back(0);
	for (int i = 0; i < B; i++) {
		cin >> num;
		Light[num] = -1;
	}

	// 누적합
	for (int i = 1; i <= N; i++) {
		Light[i] += Light[i - 1] + 1;
	}

	// 로직
	int less = B;
	int ptr = K;
	while (ptr <= N) {
		int sum = Light[ptr] - Light[ptr - K];
		if (K - sum < less) {
			less = K - sum;
		}

		ptr++;
	}

	// 출력) 최소 몇 개의 신호등을 수리해야 하는지
	cout << less;

	return 0;
}