// 알고리즘 스터디 21회차
// 백준 실버 4
// 10845 큐

#include <iostream>
#include <queue>

using namespace std;

int main() {
	int N;
	cin >> N;

	queue<int> q;
	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;

		if (input == "push") {
			int num;
			cin >> num;

			q.push(num);
		}
		else if (input == "pop") {
			if (!q.empty()) {
				int num = q.front();
				q.pop();
				cout << num << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (input == "size") {
			cout << q.size() << '\n';
		}
		else if (input == "empty") {
			cout << q.empty() << '\n';
		}
		else if (input == "front") {
			if (!q.empty()) {
				cout << q.front() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (input == "back") {
			if (!q.empty()) {
				cout << q.back() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}

	return 0;
}