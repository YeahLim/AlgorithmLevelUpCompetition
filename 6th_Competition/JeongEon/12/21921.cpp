// 백준 알고리즘 스터디 6회차
// 문제 번호: 21921번
// 문제 이름: 블로그
// 알고리즘: 슬라이딩 윈도우
// 작성일: 24.03.01

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	int N;	// 지난 날
	int X;	// 방문자 수를 셀 날짜
	cin >> N >> X;

	int input;
	vector<int> visitor;
	visitor.push_back(0);
	for (int i = 1; i <= N; i++) {
		cin >> input;
		visitor.push_back(input + visitor[i - 1]);
	}

	// 로직
	int ptr = X;
	stack<pair<int, int>> best;
	best.push({ 0, 0 });
	while (ptr <= N) {
		int sum = visitor[ptr] - visitor[ptr - X];
		if (sum > best.top().first) {
			best.push({ sum, 1 });
		}
		else if (sum == best.top().first) {
			best.top().second++;
		}

		ptr++;
	}

	// 출력
	if (best.top().first == 0) {
		cout << "SAD";
	}
	else {
		cout << best.top().first << '\n';
		cout << best.top().second << '\n';
	}

	return 0;
}