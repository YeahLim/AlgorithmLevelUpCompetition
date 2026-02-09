// 제 12회 알고리즘 스터디
// SWEA D2
// 문제명: 간단한 369게임
// 문제번호: 1926번

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int j = 1; j <= N; j++) {
		string num = to_string(j);
		int cnt = 0;
		for (int k = 0; k < num.length(); k++) {
			if (num[k] == '3' || num[k] == '6' || num[k] == '9') {
				cnt++;
			}
		}
		if (cnt == 0) {
			cout << j;
		}
		else {
			for (int i = 0; i < cnt; i++) {
				cout << "-";
			}
		}
		cout << " ";
	}

	return 0;
}