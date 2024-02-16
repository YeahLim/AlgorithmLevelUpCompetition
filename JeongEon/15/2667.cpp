// ���� �˰��� ���͵� 4ȸ��
// ���� ��ȣ: 2667��
// ���� �̸�: ������ȣ���̱�
// �˰���: ���� �켱 Ž��
// �ۼ���: ~24.02.16

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int N;	// ������ ũ��
int complex = 0;	// ����Ʈ ������
int house = 0; // �� ������ �����

int map[25][25];	// ����
bool visited[25][25] = { false };	// �湮�ߴ��� Ȯ��
vector<int> result;		// ����� ����

// ���⺤��
			// �� �� �� �Ʒ� 
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void dfs(int i, int j);

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> N;

	string input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		for (int j = 0; j < N; j++) {
			map[i][j] = input.at(j) - '0';
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 1 && visited[i][j] == false) {
				dfs(i, j);
				complex++;
				result.push_back(house);
				house = 0;
			}
		}
	}


	// ������������ ����
	sort(result.begin(), result.end());

	// ���) ù ��° �ٿ��� �� �������� ���, �� ������ ���� ���� ������������ �����Ͽ� �� �ٿ� �ϳ��� ���
	cout << complex << '\n';
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << '\n';
	}

	return 0;
}

void dfs(int y, int x) {
	visited[y][x] = true;
	house++;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || ny < 0 || nx >= N || ny >= N) {
			continue;
		}

		if (map[ny][nx] == 1 && visited[ny][nx] == false) {
			dfs(ny, nx);
		}
	}
}