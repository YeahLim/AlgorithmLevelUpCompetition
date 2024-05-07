// ���� �˰��� ���͵� 16ȸ��
// SWEA D2
// 1961. ���� �迭 ȸ��


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// �׽�Ʈ ���̽� ���� �Է�

	for (int t = 1; t <= TC; t++) {
		int N;
		cin >> N;	// �迭 ������ �Է�

		int arr[10][10];
		for (int i = 0; i < N; i++) {	// �迭 ���� �Է�
			for (int j = 0; j < N; j++) {
				cin >> arr[i][j];
			}
		}

		vector<string> result[7];
		for (int i = 0; i < N; i++) {	// result �ʱ�ȭ
			for (int j = 0; j < 3; j++) {
				result[i].push_back("");
			}
		}

		// 90��
		for (int i = N - 1; i >= 0; i--) {
			for (int j = 0; j < N; j++) {
				result[j][0] += to_string(arr[i][j]);	// 90��
				result[j][1] += to_string(arr[N - j - 1][i]);	// 180��
				result[j][2] += to_string(arr[N - i - 1][N - j - 1]);	// 270��
			}
		}

		cout << "#" << t << "\n";
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < 3; j++) {
				cout << result[i][j] << " ";
			}
			cout << '\n';
		}
	}
}