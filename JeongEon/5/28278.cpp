// 백준 28278번 <스택2>
// 알고리즘 : 큐, 스택
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// 입력부
	int N;
	cin >> N;

	int input;
	queue<int> q;
	for (int i = 0; i < N; i++) {
		cin >> input;
		q.push(input);
		if (input == 1) {
			cin >> input;
			q.push(input);
		}
	}

	// 출력부
	stack<int> s;
	for (int i = 0; i < N; i++) {
		if (q.front() == 1) {
			q.pop();
			s.push(q.front());
			q.pop();
		}
		else if (q.front() == 2) {
			if (s.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << s.top() << '\n';
				s.pop();
			}
			q.pop();
		}
		else if (q.front() == 3) {
			cout << s.size() << '\n';
			q.pop();
		}
		else if (q.front() == 4) {
			if (s.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
			q.pop();
		}
		else if (q.front() == 5) {
			if (s.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << s.top() << '\n';
			}
			q.pop();
		}
	}

	return 0;
}