// 백준 2563번 <색종이>
// 알고리즘 : 구현
#include <iostream>

using namespace std;

int main(void) {
	int arr[100][100] = { 0 };
	int sum = 0;
	int N;
	cin >> N;

	while (N--) {
		int x, y;
		cin >> x >> y;
		for (int i = y; i < y + 10; i++) {
			for (int j = x; j < x + 10; j++) {
				if (!arr[i][j]) {
					arr[i][j] = 1;
					sum++;
				}
			}
		}
	}

	cout << sum << endl;

	return 0;
}

