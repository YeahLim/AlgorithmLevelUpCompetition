// ���� 10828�� <����>
// �˰��� : ����
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// �Էº�
	int N;
	cin >> N;

	// ��º�
	string s_input;
	int i_input;
	stack<int> s;
	for (int i = 0; i < N; i++) {
		cin >> s_input;

		if (s_input == "push") {
			cin >> i_input;
			s.push(i_input);
		}

		if (s_input == "pop") {
			if (!s.empty()) {
				cout << s.top() << '\n';
				s.pop();
			}
			else {
				cout << "-1" << '\n';
			}
		}

		if (s_input == "size") {
			cout << s.size() << '\n';
		}

		if (s_input == "empty") {
			cout << s.empty() << '\n';
		}

		if (s_input == "top") {
			if (!s.empty()) {
				cout << s.top() << '\n';
			}
			else {
				cout << "-1" << '\n';
			}
		}
	}

	return 0;
}