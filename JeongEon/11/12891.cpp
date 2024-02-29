// ���� �˰��� ���͵� 6ȸ��
// ���� ��ȣ: 12891��
// ���� �̸�: DNA ��й�ȣ
// �˰���: �����̵� ������
// �ۼ���: 24.02.29

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	int S;	// ��ü ���ڿ��� ����
	int P;	// �κ� ���ڿ��� ����
	cin >> S >> P;

	string input;	// ���ڿ�
	cin >> input;

	int A, C, G, T;		// A, C, G, T ����
	cin >> A >> C >> G >> T;

	// ����
	map<char, int> DNA;
	DNA.insert({ 'A', 0 });
	DNA.insert({ 'C', 0 });
	DNA.insert({ 'G', 0 });
	DNA.insert({ 'T', 0 });

	for (int i = 0; i < P; i++) {
		DNA.find(input[i])->second++;
	}

	int ptr = 0;
	int cnt = 0;
	while (1) {
		if (DNA['A'] >= A && DNA['C'] >= C && DNA['G'] >= G && DNA['T'] >= T) {
			cnt++;
		}

		if (ptr + 1 + P <= S) {
			DNA.find(input[ptr])->second--;
			ptr++;
			DNA.find(input[ptr + P - 1])->second++;
		}
		else {
			break;
		}
	}

	// ���) ���� �� �ִ� ��й�ȣ�� ������ ��
	cout << cnt;

	return 0;
}