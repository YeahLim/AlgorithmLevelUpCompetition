// ���� 10814�� <���̼� ����>
// �˰��� : ����
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main(void) {
	// �Էº�
	int N;
	cin >> N;

	pair<int, string> temp;
	vector<pair<int, string>> vec;
	for (int i = 0; i < N; i++) {
		cin >> temp.first >> temp.second;
		vec.push_back(temp);
	}

	// ����
	stable_sort(vec.begin(), vec.end(), compare);

	// ��º�
	for (int i = 0; i < N; i++) {
		cout << vec[i].first << " " << vec[i].second << "\n";
	}

	return 0;
}
