// ���� �˰��� ���͵� 4ȸ��
// ���� ��ȣ: 11399��
// ���� �̸�: ATM
// �˰���: �׸��� �˰���, ����, ������
// �ۼ���: ~24.02.13

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(void) {
	// �Է�
	int N;	// ��� ��
	cin >> N;

	vector<int> vec;	// �� ����� ���� �����ϴ� �� �ɸ��� �ð�
	int input;			// ���Ϳ� �����ϱ� ���� ����
	for (int i = 0; i < N; i++) {
		cin >> input;
		vec.push_back(input);
	}

	sort(vec.begin(), vec.end());	// �����ϴ� �� �ɸ��� �ð��� ������������ ����

	int time = 0;	// ���� �ð��� �� ����
	for (int i = 0; i < N; i++) {	// �׸���
		time += vec[i] * (N - i);	// �ڽ��� �ɸ��� �ð� + �޻�� n-1���� �ɸ��� �ð��� �ҿ�
	}

	// ������ ���
	//int time = vec[0];	// ���� �ð��� �� ����
	//for (int i = 1; i < N; i++) {	// ������
	//	vec[i] += vec[i - 1];
	//	time += vec[i];
	//}

	// ���) �� ����� �����ϴµ� �ʿ��� �ð� ���� �ּڰ�
	cout << time;

	return 0;
}