#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> A;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;

		A.push_back(input);
	}

	vector<int> B;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;

		B.push_back(input);
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<>());

	int result = 0;
	for (int i = 0; i < N; i++) {
		result += A[i] * B[i];
	}

	cout << result << '\n';

	return 0;
}
