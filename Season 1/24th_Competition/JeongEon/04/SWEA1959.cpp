#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<int> A;
vector<int> B;

int func(vector<int> shortt, vector<int> longg) {
	vector<int> result;

	for (int i = 0; i < longg.size(); i++) {
		if (i + shortt.size() <= longg.size()) {
			int sum = 0;
			for (int j = i; j < i + shortt.size(); j++) {
				sum += longg[j] * shortt[j-i];
			}
			result.push_back(sum);
		}
	}

	sort(result.begin(), result.end(), greater<>());

	return result[0];
}

int main(void) {
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		cin >> N >> M;

		A.clear();
		for (int i = 0; i < N; i++) {
			int input;
			cin >> input;
			A.push_back(input);
		}

		B.clear();
		for (int i = 0; i < M; i++) {
			int input;
			cin >> input;
			B.push_back(input);
		}

		cout << "#" << tc << " ";
		if (A.size() >= B.size()) {
			cout << func(B, A) << '\n';
		}
		else {
			cout << func(A, B) << '\n';
		}
	}

	return 0;
}
