// ���� �˰��� ���͵� 9ȸ��
// ���� ��ȣ: 2108��
// ���� �̸�: �����
// �˰���: ����
// �ۼ���: 24.03.22

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	int N;
	cin >> N;

	int input;
	int sum = 0;	// ��� ���� ���� ��
	int repeat[8001];	// �ֺ�
	memset(repeat, 0, sizeof(repeat));
	vector<int> arr;
	for (int i = 0; i < N; i++) {
		cin >> input;
		sum += input;
		repeat[input + 4000]++;
		arr.push_back(input);
	}

	sort(arr.begin(), arr.end());	// ������������ ����

	// ������
	double mean = round((double)sum / N);
	if (mean == -0) {
		mean = 0;
	}

	cout << mean << '\n';


	// �߾Ӱ�
	cout << arr[N / 2] << '\n';

	// �ֺ�
	int most_val;
	int most = -9999;
	bool not_first = false;
	for (int i = 0; i < 8001; i++) {
		if (repeat[i] == 0) {
			continue;
		}

		if (repeat[i] == most) {
			if (not_first) {
				most_val = i - 4000;
				not_first = false;
			}
		}
		if (repeat[i] > most) {
			most = repeat[i];
			most_val = i - 4000;
			not_first = true;
		}
	}
	cout << most_val << '\n';

	// ����
	cout << arr.back() - arr.front();

	return 0;
}