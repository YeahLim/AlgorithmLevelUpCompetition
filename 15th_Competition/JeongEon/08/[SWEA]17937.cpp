// 코테 스터디 15회차
// SWEA D3
// 17937. 큰 수의 최대공약수

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int t = 1; t <= TC; t++) {
		string A, B;
		cin >> A >> B;

		cout << "#" << t << " ";
		if (A == B) {
			cout << A << '\n';
		}
		else {
			cout << 1 << '\n';
		}
	}

	return 0;
}
