// 백준 알고리즘 스터디 5회차
// 문제 번호: 17298번
// 문제 이름: 오큰수
// 알고리즘: 스택
// 작성일: 24.02.22 22시 00분 ~ 24.02.22 22시 20분

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	int N;	// 수열의 크기
	cin >> N;

	int input;
	vector<int> A;	// 수열
	for (int i = 0; i < N; i++) {
		cin >> input;
		A.push_back(input);
	}

	stack<int> s;
	stack<int> result;
	for (int i = N - 1; i >= 0; i--) {
		while (!s.empty() && s.top() <= A[i]) {
			s.pop();
		}

		if (s.empty()) {
			result.push(-1);
		}
		else {
			result.push(s.top());
		}

		s.push(A[i]);
	}

	for (int i = 0; i < N; i++) {
		cout << result.top() << ' ';
		result.pop();
	}

	return 0;
}
