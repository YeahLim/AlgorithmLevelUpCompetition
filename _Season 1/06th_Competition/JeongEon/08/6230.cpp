// 백준 알고리즘 스터디 6회차
// 문제 번호: 6230번
// 문제 이름: Buy One Get One Free
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
	int N;	// 좋은 품질의 건초 더미 개수
	int M;	// 평범한 품질의 건초 더미 개수
	cin >> N >> M;

	int input;
	vector<int> high;
	for (int i = 0; i < N; i++) {
		cin >> input;
		high.push_back(input);
	}
	sort(high.begin(), high.end());

	vector<int> low;
	for (int i = 0; i < M; i++) {
		cin >> input;
		low.push_back(input);
	}
	sort(low.begin(), low.end());

	// 로직
	int ptr1 = N - 1;
	int ptr2 = M - 1;
	int cnt = high.size();
	while (ptr1 >= 0 && ptr2 >= 0) {
		if (high[ptr1] > low[ptr2]) {
			cnt++;
			ptr1--;
			ptr2--;
		}
		else {
			ptr2--;
		}
	}

	// 출력) 농부 John이 얻을 수 있는 건초 더미의 최대 총 개수
	cout << cnt;

	return 0;
}