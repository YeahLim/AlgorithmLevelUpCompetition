// ���� �˰��� ���͵� 6ȸ��
// ���� ��ȣ: 4158��
// ���� �̸�: CD
// �˰���: �� ������
// �ۼ���: 24.02.27

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> result;	// ����� ���

	// �Էº�
	while (1) {
		int N;	// ����̰� ������ �ִ� CD�� ��
		int M;	// �����̰� ������ �ִ� CD�� �� ( 1 <= N, M <= 1,000,000)
		cin >> N >> M;

		if (N == 0 && M == 0) {
			break;
		}

		int input;
		vector<int> arr_G;	// ����� CD
		vector<int> arr_Y;	// ������ CD
		for (int i = 0; i < N; i++) {
			cin >> input;
			arr_G.push_back(input);
		}
		for (int i = 0; i < M; i++) {
			cin >> input;
			arr_Y.push_back(input);
		}

		// ����
		int G = 0, Y = 0;	// ���, ���� ������
		int cnt = 0;	// �� ����� ���ÿ� ������ �ִ� CD�� ����
		while (G < N && Y < M) {
			if (arr_G[G] < arr_Y[Y]) {
				G++;
			}
			else if (arr_Y[Y] < arr_G[G]) {
				Y++;
			}
			else if (arr_G[G] == arr_Y[Y]) {
				cnt++;
				Y++;
				G++;
			}
		}

		result.push_back(cnt);
	}

	// ���) �� ����� ���ÿ� ������ �ִ� CD�� ����
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << '\n';
	}

	return 0;
}