// ���� �˰��� ���͵� 9ȸ��
// ���� ��ȣ: 11053��
// ���� �̸�: ���� �� �����ϴ� �κ� ����
// �˰���: 
// �ۼ���: 24.03.18

#include <iostream>
#include <vector>

using namespace std;

int N;	// ������ ũ��
vector<int> A;
vector<int> B(1001, 1);


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
			if (A[i] > A[j])
				B[i] = max(B[j] + 1, B[i]);
		}
	}

	// ���
	int ans = 0;
	for (int i = 0; i < N; i++)
		ans = max(ans, B[i]);
	cout << ans;

	return 0;
}