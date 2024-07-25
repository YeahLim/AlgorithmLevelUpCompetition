#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int cnt = 1;
	stack<int> s;
	vector<char> result;
	for (int i = 1; i <= N; i++) {
		int input;
		cin >> input;

		while (cnt <= input) {
			s.push(cnt);
			cnt++;
			result.push_back('+');
		}

		if (s.top() == input) {
			s.pop();
			result.push_back('-');
		}
		else {
			cout << "NO" << '\n';
			return 0;
		}
	}
	if (!s.empty()) {
		cout << "NO" << '\n';
		return 0;
	}

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << '\n';
	}

	return 0;
}
