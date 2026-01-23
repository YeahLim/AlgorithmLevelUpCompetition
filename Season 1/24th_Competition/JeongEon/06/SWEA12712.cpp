#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int N, M;
int arr[16][16];

int func_plus(int y, int x) {
	int sum = 0;

	for (int i = 1; i < M; i++) {
		if (y + i < N && y + i >= 0) {
			sum += arr[y + i][x];
		}
		if (y - i < N && y - i >= 0) {
			sum += arr[y - i][x];
		}
		if (x + i < N && x + i >= 0) {
			sum += arr[y][x + i];
		}
		if (x - i < N && x - i >= 0) {
			sum += arr[y][x - i];
		}
	}

	sum += arr[y][x];

	return sum;
}

int func_x(int y, int x) {
	int sum = 0;

	for (int i = 1; i < M; i++) {
		if (y + i < N && y + i >= 0 && x + i < N && x + i >= 0) {
			sum += arr[y + i][x + i];
		}
		if (y - i < N && y - i >= 0 && x + i < N && x + i >= 0) {
			sum += arr[y - i][x + i];
		}
		if (y + i < N && y + i >= 0 && x - i < N && x - i >= 0) {
			sum += arr[y + i][x - i];
		}
		if (y - i < N && y - i >= 0 && x - i < N && x - i >= 0) {
			sum += arr[y - i][x - i];
		}
	}

	sum += arr[y][x];

	return sum;
}

int main(void) {
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		cin >> N >> M;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> arr[i][j];
			}
		}

		vector<int> result;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				result.push_back(func_plus(i, j));
				result.push_back(func_x(i, j));
			}
		}

		sort(result.begin(), result.end(), greater<>());

		cout << "#" << tc << " ";
		cout << result[0] << '\n';
	}

	return 0;
}
