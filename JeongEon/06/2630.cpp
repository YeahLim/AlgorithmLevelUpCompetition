// ���� �˰��� ���͵� 8ȸ��
// ���� ��ȣ: 2630��
// ���� �̸�: ������ �����
// �˰���: ��������
// �ۼ���: 24.03.13

#include <iostream>

using namespace std;

int paper[129][129];
int white = 0; // �� ����
int blue = 0; // �Ķ� ����

void cut_paper(int y, int x, int k);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	int N;	// ������ �� �� ����
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> paper[i][j];
		}
	}

	// �ڵ�
	cut_paper(0, 0, N);
	cout << white << '\n';
	cout << blue << '\n';


	return 0;
}

void cut_paper(int y, int x, int k) {
	bool cut = false; // �߶���ϴ��� 
	int first_color = paper[y][x]; // ù��°ĭ�� ��

	for (int i = y; i < y + k; i++) {
		for (int j = x; j < x + k; j++) {
			if (paper[i][j] != first_color) {
				cut = true;
				break;
			}
		}
	}

	if (cut) { // �߶���ϴ� �����̸� 
		cut_paper(y, x, k / 2);					// ���ʿ� ���� ��Ʈ
		cut_paper(y, x + k / 2, k / 2);			//���ʿ� ������ ��Ʈ
		cut_paper(y + k / 2, x, k / 2);			// �Ʒ��ʿ� ���� ��Ʈ
		cut_paper(y + k / 2, x + k / 2, k / 2); // �Ʒ��ʿ� ������ ��Ʈ
	}
	else {
		if (first_color == 1) // �Ķ���
			blue++;
		else // ���
			white++;
	}
}