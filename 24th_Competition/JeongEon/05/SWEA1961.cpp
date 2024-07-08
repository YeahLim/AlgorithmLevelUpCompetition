#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N;
int arr[8][8];

void func90(vector<string> * result) {
	for (int i = 0; i < N; i++) {
		string change = "";
		for (int j = 0; j < N; j++) {
			change += to_string(arr[N - j - 1][i]);
		}
		result[i].push_back(change);
	}
}

void func180(vector<string> * result) {
	for (int i = 0; i < N; i++) {
		string change = "";
		for (int j = 0; j < N; j++) {
			change += to_string(arr[N - i - 1][N - j - 1]);
		}
		result[i].push_back(change);
	}
}

void func270(vector<string> * result) {
	for (int i = 0; i < N; i++) {
		string change = "";
		for (int j = 0; j < N; j++) {
			change += to_string(arr[j][N - i - 1]);
		}
		result[i].push_back(change);
	}
}

int main(void) {
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		cin >> N;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> arr[i][j];
			}
		}
		
		cout << "#" << tc << '\n';
		
		vector<string> * result = new vector<string> [N];
		func90(result);
		func180(result);
		func270(result);

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < 3; j++) {
				cout << result[i][j] << " ";
			}
			cout << "\n";
		}

		delete[] result;
	}

	return 0;
}
