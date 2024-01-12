// ���� 4948�� <����Ʈ�� ����>
// �˰��� : �Ҽ�����, �����佺�׳׽��� ü
#include <iostream>
#include <vector>
using namespace std;

void isPrime(int n) {
	int cnt = 0;
	bool* isPrime = new bool[2 * n + 1];

	for (int i = 0; i <= 2 * n; i++) {
		isPrime[i] = true;
	}


	for (int i = 2; i <= 2 * n; i++) {
		if (isPrime[i]) {
			if (i > n) {
				cnt++;
			}
			for (int j = i * 2; j <= 2 * n; j += i) {
				isPrime[j] = false;
			}
		}
	}

	cout << cnt << '\n';
	delete[] isPrime;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// �Էº�
	int input;
	vector <int> vec;
	while (1) {
		cin >> input;
		if (input == 0) {
			break;
		}

		vec.push_back(input);
	}


	// ��º�
	for (int i = 0; i < vec.size(); i++) {
		isPrime(vec[i]);
	}

	return 0;
}