// 22회차 알고리즘 스터디
// 백준 실버 4
// 10866. 덱

#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	deque<int> deq;
	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;

		if (input == "push_back") {
			int num;
			cin >> num;
			deq.push_back(num);
		}
		else if (input == "push_front") {
			int num;
			cin >> num;
			deq.push_front(num);
		}
		else if (input == "pop_front") {
			if (deq.empty()) {
				cout << -1 << '\n';
			}
			else {
				int num = deq.front();
				cout << num << '\n';
				deq.pop_front();
			}
		}
		else if (input == "pop_back") {
			if (deq.empty()) {
				cout << -1 << '\n';
			}
			else {
				int num = deq.back();
				cout << num << '\n';
				deq.pop_back();
			}
		}
		else if (input == "size") {
			cout << deq.size() << '\n';
		}
		else if (input == "empty") {
			if (deq.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (input == "front") {
			if (!deq.empty()) {
				cout << deq.front() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (input == "back") {
			if (!deq.empty()) {
				cout << deq.back() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}


	return 0;
}