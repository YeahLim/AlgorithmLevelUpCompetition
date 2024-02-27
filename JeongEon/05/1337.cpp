// ���� �˰��� ���͵� 6ȸ��
// ���� ��ȣ: 1337��
// ���� �̸�: �ùٸ� �迭
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

	int N;	// �迭�� ũ��
	cin >> N;

	int input;
	vector<int> arr;	// �迭
	for (int i = 0; i < N; i++) {
		cin >> input;
		arr.push_back(input);
	}

	sort(arr.begin(), arr.end());

	int best = 1;
	for (int i = 0; i < N; i++) {
		int cnt = 1;
		for (int j = i + 1; j < N; j++) {
			if (arr[j] - arr[i] < 5 && arr[j] - arr[i] > 0) {
				cnt++;
			}
		}
		best = max(best, cnt);
	}

	//��� ���
	if (best >= 5) {
		cout << 0;
	}
	else {
		cout << 5 - cnt << '\n';
	}

	return 0;
}