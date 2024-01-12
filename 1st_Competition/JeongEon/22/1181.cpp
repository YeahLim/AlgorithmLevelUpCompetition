// ���� 1181�� <�ܾ� ����>
// �˰��� : ����
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int compare(string a, string b) {
	if (a.length() < b.length()) {
		return 1;
	}
	else if (b.length() < a.length()) {
		return 0;
	}
	else {
		return a < b;
	}
}

int main() {
	int N;
	cin >> N;

	string* arr = new string[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N, compare);

	for (int i = 0; i < N; i++) {
		if (i > 0 && arr[i] == arr[i - 1]) {
			continue;
		}
		cout << arr[i] << ' ';
	}

}