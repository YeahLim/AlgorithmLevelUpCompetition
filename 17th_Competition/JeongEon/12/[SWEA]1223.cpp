// ���� �˰��� ���͵� 17ȸ��
// SWEA D4
// 1223. [S/W �����ذ� �⺻] 6���� - ����2

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

		char tmp;
		stack<int> arr;
		arr.push(input[0] - '0');
		for (int i = 1; i < N; i++) {
			if ((input[i] - '0') >= 0 && (input[i] - '0') <= 9) {
				if (tmp == '*') {
					arr.top() *= input[i] - '0';
				}
				else {
					arr.push(input[i] - '0');
				}
			}
			else {
				tmp = input[i];
			}
		}

		int size = arr.size();
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += arr.top();
			arr.pop();
		}

		cout << "#" << tc << " ";
		cout << sum << '\n';
	}

	return 0;
}