// ���� 9012�� <��ȣ>
// �˰��� : ����
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// �Էº�
	int N;
	cin >> N;

	string* arr = new string[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	// ��º�
	for (int i = 0; i < N; i++) {
		stack<char> s1;
		stack<char> s2;
		int length = arr[i].length();
		for (int j = 0; j < length; j++) {
			if (arr[i].front() == '(') {
				s1.push(arr[i].front());
				arr[i].erase(0, 1);
			}
			else if (arr[i].front() == ')') {
				s2.push(arr[i].front());
				if (s1.size() < s2.size()) {
					break;
				}
				s1.pop();
				s2.pop();
				arr[i].erase(0, 1);
			}
		}
		if (!s1.empty() || !s2.empty()) {
			cout << "NO" << '\n';
		}
		else {
			cout << "YES" << '\n';
		}
	}

	return 0;
}