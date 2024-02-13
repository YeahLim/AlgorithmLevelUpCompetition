// ���� �˰��� ���͵� 4ȸ��
// ���� ��ȣ: 1931��
// ���� �̸�: ȸ�ǽ� ����
// �˰���: �׸��� �˰���, ����
// �ۼ���: ~24.02.13

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2);

int main(void) {
	// �Է�
	int N;	// ȸ�� ��
	cin >> N;

	int start, end;
	vector<pair<int, int>> vec;	// ȸ�� ����
	for (int i = 0; i < N; i++) {
		cin >> start >> end;	// ���� �ð�, ������ �ð�
		vec.push_back({ start, end });
	}

	sort(vec.begin(), vec.end(), compare);

	int time = vec[0].second;	//	ȸ�� ������ �ð��� ����
	int cnt = 1;	// ȸ���� ����
	for (int i = 1; i < N; i++) {
		if (vec[i].first >= time) {
			time = vec[i].second;
			cnt++;
		}
	}

	// ���) ȸ���� �ִ� ����	
	cout << cnt;

	return 0;
}

bool compare(pair<int, int> p1, pair<int, int> p2) {
	if (p1.second == p2.second) {	// ȸ�� ������ �ð��� ���ٸ�
		return p1.first < p2.first;	// ȸ�� �����ϴ� �ð��� ������������ ����
	}
	// ȸ�� ������ �ð��� �ٸ��ٸ�
	return p1.second < p2.second;	// ȸ�� ������ �ð��� ������������ ����
}