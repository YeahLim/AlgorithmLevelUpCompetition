// ���� 18870�� <��ǥ ����>
// �˰��� : ����
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	// �Էº�
	int N;
	cin >> N;

	int input;
	vector <int> vec;
	vector <int> cal;
	for (int i = 0; i < N; i++) {
		cin >> input;
		vec.push_back(input);
		cal.push_back(input);
	}

	stable_sort(cal.begin(), cal.end());
	cal.erase(unique(cal.begin(), cal.end()), cal.end());
	// erase( , )�� ���� �����
	// erase(��)�� �� �����
	// unique�� �ߺ��� �迭 �޺κ����� ������


	// ��º�
	for (int i = 0; i < N; i++) {
		cout << lower_bound(cal.begin(), cal.end(), vec[i]) - cal.begin() << " ";
		// lower_boud(vector.begin(), vector.end(), ��)
		// ������ ũ�ų� ���� ù��° ������ �ּҰ� ��ȯ
		// ���ٸ� end ��ȯ
	}

	return 0;
}
