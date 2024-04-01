// ���� �˰��� ���͵� 9ȸ��
// ���� ��ȣ: 11054��
// ���� �̸�: ���� �� ������� �κ� ����
// �˰���: 
// �ۼ���: 24.03.18

#include <iostream>
#include <vector>

using namespace std;

int N;	// ������ ũ��
vector<int> A;
vector<int> rise(1001, 1);
vector<int> fall(1001, 1);


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> N;

	int input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		A.push_back(input);
	}

	// �ڵ�
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (A[i] > A[j]) {
				rise[i] = max(rise[j] + 1, rise[i]);
			}
		}
	}

	for (int i = N - 1; i >= 0; i--) {
		for (int j = N - 1; j > i; j--) {
			if (A[i] > A[j]) {
				fall[i] = max(fall[j] + 1, fall[i]);
			}
		}
	}


	// ���
	int ans = 0;
	for (int i = 0; i < N; i++) {
		ans = max(ans, rise[i] + fall[i]);
	}

	cout << ans - 1 << '\n';

	return 0;
}