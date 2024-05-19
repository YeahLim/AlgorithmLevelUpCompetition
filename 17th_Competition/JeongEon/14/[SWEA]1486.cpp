// 코테 알고리즘 스터디 17회차
// SWEA D4
// 1486. 장훈이의 높은 선반

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int N, B;
vector<int> result;

void bigger(int sum, vector<int> arr, int x) {
	if (sum >= B) {
		result.push_back(abs(sum - B));
		return;
	}

	for (int i = x; i < N; i++) {
		bigger(sum + arr[i], arr, i + 1);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int tc = 1; tc <= TC; tc++) {
		cin >> N >> B;

		int sum = 0;
		vector<int> arr;
		for (int i = 0; i < N; i++) {
			int input;
			cin >> input;
			arr.push_back(input);
			sum += input;
		}

		sort(arr.begin(), arr.end());

		result.clear();

		bigger(0, arr, 0);

		sort(result.begin(), result.end());

		cout << "#" << tc << " ";
		cout << result[0] << '\n';
	}

	return 0;
}