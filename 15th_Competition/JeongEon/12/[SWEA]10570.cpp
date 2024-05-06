// 코테 스터디 15회차
// SWEA D3
// 10570. 제곱 팰린드롬 수

#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <vector>

using namespace std;

bool num(string x) {
	int tmp = 0;
	if (x.size() % 2 != 0) {
		tmp = 1;
	}
	stack<char> stack;
	for (int i = 0; i < (x.size() - tmp) / 2; i++) {
		stack.push(x[i]);
	}

	for (int i = (x.size() - tmp) / 2 + tmp; i < x.size(); i++) {
		if (stack.top() != x[i]) {
			return false;
		}
		stack.pop();
	}

	return true;
}

bool sqrt_num(string x) {
	int tmp = 0;
	if (x.size() % 2 != 0) {
		tmp = 1;
	}
	stack<char> stack;
	for (int i = 0; i < (x.size() - tmp) / 2; i++) {
		stack.push(x[i]);
	}

	for (int i = (x.size() - tmp) / 2 + tmp; i < x.size(); i++) {
		if (stack.top() != x[i]) {
			return false;
		}
		stack.pop();
	}

	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int t = 1; t <= TC; t++) {
		int A, B;
		cin >> A >> B;

		int result = 0;
		for (int i = A; i <= B; i++) {
			if (floor(sqrt(i)) == sqrt(i)) {
				string input1 = to_string(i);
				string input2 = to_string((int)sqrt(i));
				if (num(input1) && sqrt_num(input2)) {
					result++;
				}
			}
		}

		cout << "#" << t << " ";
		cout << result << '\n';
	}

	return 0;
}
