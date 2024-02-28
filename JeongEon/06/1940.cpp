// ���� �˰��� ���͵� 6ȸ��
// ���� ��ȣ: 1940��
// ���� �̸�: �ָ�
// �˰���: �� ������
// �ۼ���: 24.02.27

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	int N;	// ������ ���� ��� ����
	cin >> N;

	int M;	// ������ ����� ���� �ʿ��� ���� ��ȣ
	cin >> M;

	int input;
	vector<int> arr;
	for (int i = 0; i < N; i++) {
		cin >> input;
		arr.push_back(input);
	}

	// ����
	sort(arr.begin(), arr.end());

	int ptr1 = 0;
	int ptr2 = N - 1;
	int cnt = 0;
	while (ptr1 < ptr2) {
		if (arr[ptr1] + arr[ptr2] > M) {
			ptr2--;
		}
		else if (arr[ptr1] + arr[ptr2] < M) {
			ptr1++;
		}
		else if (arr[ptr1] + arr[ptr2] == M) {
			cnt++;
			ptr1++;	ptr2--;
		}
	}

	// ���
	cout << cnt;

	return 0;
}