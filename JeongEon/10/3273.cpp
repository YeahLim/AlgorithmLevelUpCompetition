// ���� �˰��� ���͵� 6ȸ��
// ���� ��ȣ: 3273��
// ���� �̸�: �� ���� ��
// �˰���: ��������
// �ۼ���: 24.02.28

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	int n;	// ���� ũ��
	cin >> n;

	int input;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		cin >> input;
		arr.push_back(input);
	}

	sort(arr.begin(), arr.end());

	int x;	// �� ��
	cin >> x;

	// ����
	int start = 0;
	int end = n - 1;
	int cnt = 0;
	while (start < end && end < n) {
		int sum = arr[start] + arr[end];

		if (sum == x) {
			cnt++;
			start++;
			end--;
		}
		else if (sum < x) {
			start++;
		}
		else if (sum > x) {
			end--;
		}
	}

	// ���
	cout << cnt;

	return 0;
}