// ���� �˰��� ���͵� 16ȸ��
// SWEA D3
// 13229. �Ͽ���

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// �׽�Ʈ ���̽� ���� �Է�

	for (int t = 1; t <= TC; t++) {
		string S;
		cin >> S;

		cout << "#" << t << " ";
		if (S == "MON") {
			cout << 6 << '\n';
		}
		else if (S == "TUE") {
			cout << 5 << '\n';
		}
		else if (S == "WED") {
			cout << 4 << '\n';
		}
		else if (S == "THU") {
			cout << 3 << '\n';
		}
		else if (S == "FRI") {
			cout << 2 << '\n';
		}
		else if (S == "SAT") {
			cout << 1 << '\n';
		}
		else if (S == "SUN") {
			cout << 7 << '\n';
		}

	}
}