// 코테 스터디 15회차
// SWEA D3
// 20019. 회문의 회문

#include <iostream>
#include <string>
#include <stack>
#include <cmath>

using namespace std;

bool front(string S) {
	int N = S.length();

	int tmp;
	if (((N - 1) / 2) % 2 == 0) {
		tmp = 0;
	}
	else {
		tmp = 1;
	}

	stack<char> front;
	for (int i = 0; i < floor((N - 1) / 4); i++) {
		front.push(S[i]);
	}

	for (int i = floor((N - 1) / 4) + tmp; i < (N - 1) / 2; i++) {
		if (front.top() != S[i]) {
			return false;
		}
		front.pop();
	}

	return true;
}

bool back(string S) {
	int N = S.length();

	int tmp;
	if (((N - 1) / 2) % 2 == 0) {
		tmp = 0;
	}
	else {
		tmp = 1;
	}

	stack<char> back;
	for (int i = ((N - 1) / 2) + 1; i < N - floor((N - 1) / 4) - tmp; i++) {
		back.push(S[i]);
	}

	for (int i = N - floor((N - 1) / 4); i < N; i++) {
		if (back.top() != S[i]) {
			return false;
		}
		back.pop();
	}

	return true;
}

bool whole(string S) {
	int N = S.length();

	stack<char> whole;
	for (int i = 0; i < (N - 1) / 2; i++) {
		whole.push(S[i]);
	}

	for (int i = ((N - 1) / 2) + 1; i < N; i++) {
		if (whole.top() != S[i]) {
			return false;
		}
		whole.pop();
	}

	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		string S;
		cin >> S;

		cout << "#" << t << " ";

		if (front(S) && back(S) && whole(S)) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
			//cout << front(S) << " " << back(S) << " " << whole(S) << '\n';
		}
	}

	return 0;
}
