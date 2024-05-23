#include<iostream>
#include<vector>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int M, N, K;
	cin >> M >> N >> K;

	if (M > N) {
		cout << "normal";
		return 0;
	}

	vector<int> secret;
	for (int i = 0; i < M; i++) {
		int input;
		cin >> input;
		if (input >= 1 && input <= K) {
			secret.push_back(input);
		}
	}

	vector<int> user;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		if (input >= 1 && input <= K) {
			user.push_back(input);
		}
	}

	bool gatcha = true;
	for (int i = 0; i < N - M + 1; i++) {
		for (int j = 0; j < M; j++) {
			if (user[i + j] != secret[j]) {
				gatcha = false;
				break;
			}
			gatcha = true;
		}
		if (gatcha) {
			break;
		}
	}


	if (gatcha) {
		cout << "secret";
	}
	else {
		cout << "normal";
	}

	return 0;
}
