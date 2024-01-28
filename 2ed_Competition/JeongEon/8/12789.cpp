// 백준 12789번 <도키도키 간식드리미>
// 알고리즘 : 스택
#include <iostream>
#include <string>
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
	}

	// 출력부
	int n = 1;
	stack<int> s;
	while (1) {
		if (q.empty() && s.empty()) {
			cout << "Nice";
			break;
		}

		if (!q.empty() && q.front() == n) {
			q.pop();
			n++;
		}
		else if (!s.empty() && s.top() == n) {
			s.pop();
			n++;
		}
		else {
			if (!q.empty() && !s.empty() && s.top() < q.front()) {
				cout << "Sad";
				break;
			}
			s.push(q.front());
			q.pop();
		}
	}

	return 0;
}