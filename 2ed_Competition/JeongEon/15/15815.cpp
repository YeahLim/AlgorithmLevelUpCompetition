// 백준 15815번 <천재 수학자 성필>
// 알고리즘 : 스택
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// 입력부
	string input;
	getline(cin, input);

	stack<int> num;
	int length = input.length();
	for (int i = 0; i < length; i++) {
		char c = input.front();
		if (c >= '0' && c <= '9') {
			num.push(c - '0');
		}
		else {
			int a = num.top();
			num.pop();
			int b = num.top();
			num.pop();
			if (input.front() == '+') {
				num.push(a + b);
			}
			if (input.front() == '-') {
				num.push(b - a);
			}
			if (input.front() == '*') {
				num.push(a * b);
			}
			if (input.front() == '/') {
				num.push(b / a);
			}
		}
		input.erase(0, 1);
	}

	// 출력부
	cout << num.top();

	return 0;
}