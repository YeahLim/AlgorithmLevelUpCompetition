#include <iostream>

using namespace std;

int arr[3] = { 1, 2, 3 };
int cnt = 0;

void backTracking(int n, int sum) {
	if (sum >= n) {
		if (sum == n) {
			cnt++;
		}
		return;
	}

	for (int i = 0; i < 3; i++) {
		sum += arr[i];
		backTracking(n, sum);
		sum -= arr[i];
	}
}

int main(void) {
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int n;
		cin >> n;
		
		cnt = 0;
		backTracking(n, 0);

		cout << cnt << endl;
	}

	return 0;
}
