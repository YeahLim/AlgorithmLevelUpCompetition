// ���� 10816�� <���� ī�� 2>
// �˰��� : ��, �̺� Ž��
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;


int main(void) {
	// �̰� ������ ������.. ��
	ios::sync_with_stdio(false);
	cin.tie(0);

	// �Էº�
	int N;
	cin >> N;

	int* SangGeun = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> SangGeun[i];
	}

	stable_sort(SangGeun, SangGeun + N);

	int M;
	cin >> M;

	int input;
	for (int i = 0; i < M; i++) {
		cin >> input;
		cout << upper_bound(SangGeun, SangGeun + N, input) - lower_bound(SangGeun, SangGeun + N, input) << " ";
	}

	/*
	// �Էº�
	int N;
	cin >> N;

	int input;
	multimap <int, int> SangGeun;
	for (int i = 0; i < N; i++) {
		cin >> input;
		SangGeun.insert({input, 1});
	}

	int M;
	cin >> M;
	map <int, int> compare;
	for (int i = 0; i < M; i++) {
		cin >> input;
		compare.insert({ i, input });
	}

	// ��º�
	for (int i = 0; i < M; i++) {
		// ���Ⱑ �ݺ����� �ϳ� �� �־ �ð� �ʰ�
		cout << SangGeun.count(compare[i]) << " ";
	}
	*/

	return 0;
}