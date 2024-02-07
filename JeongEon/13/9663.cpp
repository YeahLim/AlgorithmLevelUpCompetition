// <����>
// ������ȣ: 9663��
// �����̸�: N-Queen
// �˰���: ��Ʈ��ŷ
// ������ ������: 24.02.06

#include <iostream>

using namespace std;

//void nqueen(int x);
//bool check(int col, int row);
void queen(int x);
int col[16];
int n;
int ans = 0;

//bool arr[16][16] = { false };
//int N;	// �� N��
//int sum = 0;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	queen(0);
	//nqueen(1);

	cout << ans;
	//cout << sum;

	return 0;
}

//void nqueen(int x) {
//	if (x > N) {
//		sum++;
//	}
//	else {
//		for (int i = 1; i <= N; i++) {
//			arr[x][i] = true;
//			if (check(x, i)) {
//				nqueen(x + 1);
//			}
//			arr[x][i] = false;
//		}
//	}
//}

void queen(int x) {
	if (n == x) {
		ans++; // ī��Ʈ +1
	}
	else {
		for (int i = 0; i < n; i++) {
			col[x] = i; // ���� ��ġ�� ����
			bool can = true;
			for (int j = 0; j < x; j++) {
				if (col[x] == col[j] || abs(col[x] - col[j]) == x - j) {
					//���� ��ġ�� ���� ���� ���� �浹�ϴ� �� Ȯ��
					// 1. ���� �࿡ �ִ°�
					// 2. �밢���� �ִ°�
					can = false; //�浹�ϸ� �ٸ� ���� ��ġ�� ���ƾ���
					break;
				}
			}
			if (can) { // �浹���� �ʴ´ٸ� ���� ������ �Ѿ.
				queen(x + 1);
			}
		}
	}
} //��Ʈ��ŷ

//bool check(int col, int row) {
//	int temp = 1;
//	for (int i = col - 1; i > 0; i--, temp++) {
//		if (arr[i][row] == true || arr[col - temp][row - temp] == true || arr[col - temp][row + temp] == true) {
//			// ���� ���� ��, ������ �밢�� �� ���� ��, ������ �� �밢�� �� ���� ��
//			return false;
//		}
//	}
//
//	return true;
//}