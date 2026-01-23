// 코테 알고리즘 스터디 17회차
// SWEA D4
// 1218. [S/W 문제해결 기본] 4일차 - 괄호 짝짓기

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC = 10;
	// cin >> TC;

	for (int tc = 1; tc <= TC; tc++) {
		int N;
		cin >> N;

		string input;
		cin >> input;

		stack<char> small;
		stack<char> middle;
		stack<char> big;
		stack<char> arrow;

		int result = 1;
		for (int i = 0; i < N; i++) {
			if (input[i] == '(') {
				small.push(input[i]);
			}
			else if (input[i] == '{') {
				middle.push(input[i]);
			}
			else if (input[i] == '[') {
				big.push(input[i]);
			}
			else if (input[i] == '<') {
				arrow.push(input[i]);
			}
			else if (input[i] == ')') {
				if (small.empty()) {
					result = 0;
					break;
				}
				if (small.top() == '(') {
					small.pop();
				}
			}
			else if (input[i] == '}') {
				if (middle.empty()) {
					result = 0;
					break;
				}
				if (middle.top() == '{') {
					middle.pop();
				}
			}
			else if (input[i] == ']') {
				if (big.empty()) {
					result = 0;
					break;
				}
				if (big.top() == '[') {
					big.pop();
				}
			}
			else if (input[i] == '>') {
				if (arrow.empty()) {
					result = 0;
					break;
				}
				if (arrow.top() == '<') {
					arrow.pop();
				}
			}
		}

		if (!small.empty() || !middle.empty() || !big.empty() || !arrow.empty()) {
			result = 0;
		}

		cout << "#" << tc << " ";
		cout << result << '\n';
	}

	return 0;
}