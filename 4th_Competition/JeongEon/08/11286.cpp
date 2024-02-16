// 백준 알고리즘 스터디 4회차
// 문제 번호: 11286번
// 문제 이름: 절댓값 힙
// 알고리즘: 우선순위 큐
// 작성일: ~24.02.15

#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

struct comp {
	bool operator() (long long int a, long long int b) {
		if (abs(a) == abs(b)) {
			return a > b;
		}
		return abs(a) > abs(b);
	}
};
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// 입력
	int N;	// 연산의 개수
	cin >> N;

	priority_queue<long long int, vector<long long int>, comp> Q;
	long long int input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		if (input == 0) {
			if (Q.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << Q.top() << '\n';
				Q.pop();
			}
		}
		else {
			Q.push(input);
		}
	}

	return 0;
}