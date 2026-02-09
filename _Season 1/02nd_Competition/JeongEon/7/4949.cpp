// 백준 4949번 <균형잡힌 세상>
// 알고리즘 : 스택
#include <iostream>
#include <string>
#include <queue>
#include <stack>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	queue<string> Q_input;
	while (1) {
		// 입력부
		string s;
		getline(cin, s);
		Q_input.push(s);
		if (s == ".") {
			break;
		}
	}

	int Q_size = Q_input.size();
	for (int i = 0; i < Q_size - 1; i++) {
		stack<char> s;
		bool flag = 0;
		int length = Q_input.front().length();
		for (int i = 0; i < length; i++) {
			if (Q_input.front().front() == '.') {
				break;
			}

			if (Q_input.front().front() == '(' || Q_input.front().front() == '[') {
				s.push(Q_input.front().front());
				Q_input.front().erase(0, 1);
			}
			else if (Q_input.front().front() == ')') {
				if (!s.empty() && s.top() == '(') {
					s.pop();
				}
				else {
					flag = 1;
					break;
				}
				Q_input.front().erase(0, 1);
			}
			else if (Q_input.front().front() == ']') {
				if (!s.empty() && s.top() == '[') {
					s.pop();
				}
				else {
					flag = 1;
					break;
				}
				Q_input.front().erase(0, 1);
			}
			else {
				Q_input.front().erase(0, 1);
			}
		}

		// 출력부
		if (s.empty() && flag == 0) {
			cout << "yes" << '\n';
		}
		else {
			cout << "no" << '\n';
		}
		Q_input.pop();
	}

	return 0;
}