// <����>
// ������ȣ: 25682��
// �����̸�: ü���� �ٽ� ĥ�ϱ� 2
// �˰���: ������
// ������ ������: 24.02.08

#include <iostream>
#include <cmath>

using namespace std;

int N, M, K;	// ü���� ũ��(����, ����, �ٽ� ���� ũ��)
int B[2001][2001];	// ���� ü����(B����)
int W[2001][2001];	// ���� ü����(W����)
int minimum = 4000000;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// �Էº�
	cin >> N >> M >> K;	// ü���� ũ��(����, ����, �ٽ� ���� ũ��)

	// ���� ü����
	bool black = false; bool white = true;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			B[i][j] = black;
			W[i][j] = white;
			black = !black; white = !white;
		}
		if (M % 2 == 0) {
			black = !black; white = !white;
		}
	}

	// 0 : Black, 1 : White
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			char tmp;
			cin >> tmp;
			int temp = (tmp == 'B') ? 0 : 1;
			// ���� ��� 0, �ٸ� ��� 1 -> XOR ������ �̿�
			B[i][j] = temp ^ B[i][j];
			W[i][j] = temp ^ W[i][j];

			// 2���� �迭 ������
			B[i][j] = B[i - 1][j] + B[i][j - 1] - B[i - 1][j - 1] + B[i][j];;
			W[i][j] = W[i - 1][j] + W[i][j - 1] - W[i - 1][j - 1] + W[i][j];;
		}
	}


	//// 0 : Black, 1 : White
	//for (int i = 1; i <= N; i++) {
	//	for (int j = 1; j <= M; j++) {
	//		char inp;
	//		cin >> inp;

	//		int input;
	//		if (inp == 'B') {
	//			input == 0;
	//		}
	//		else {
	//			input == 1;
	//		}
	//		
	//		// xor ������ : ������ 0, �ٸ��� 1
	//		B[i][j] = input ^ B[i][j];
	//		W[i][j] = input ^ W[i][j];

	//		// ������ = �� + ���� - �»�� �밢��
	//		B[i][j] += B[i - 1][j] + B[i][j - 1] - B[i - 1][j - 1];
	//		W[i][j] += W[i - 1][j] + W[i][j - 1] - W[i - 1][j - 1];
	//	}
	//}

	for (int i = 1; i <= N - K + 1; i++) {
		for (int j = 1; j <= M - K + 1; j++) {
			// ��ġ�� ���� ���ٰ� ����. �׸�ģ ���� �����̶�� ����.
			//  1  2  3  4
			//     ________
			//  5 | 6  7  8|
			//  9 |10 11 12|
			// 13 |14 15 16|
			//    ----------
			// ���� = K * K ���� �� ���� ū �� = ���� �� �ٲ��ߵǴ� Ƚ���� �����յ� �� = 16�� ��ġ
			// ������ = ����(16) - ���� �� ��(13) - ���� �� ��(4) + ���� �� �»�� �밢��(1)
			int x = i, y = j; // ���� �� ù��°(6)�� x, y��
			int xx = i + K - 1, yy = j + K - 1;	// ���� �� ���� ū ���� x, y��(���� ��ġ)
			minimum = min(minimum, B[xx][yy] - B[xx][y - 1] - B[x - 1][yy] + B[x - 1][y - 1]);
			minimum = min(minimum, W[xx][yy] - W[xx][y - 1] - W[x - 1][yy] + W[x - 1][y - 1]);
		}
	}

	cout << minimum;


	return 0;
}