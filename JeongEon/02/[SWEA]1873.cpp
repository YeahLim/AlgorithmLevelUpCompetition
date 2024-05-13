// 코테 알고리즘 스터디 17회차
// SWEA D3
// 1873. 상호의 배틀필드

#include <iostream>

using namespace std;

char map[20][20];
int H, W;

void print() {
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cout << map[i][j];
		}
		cout << '\n';
	}
}

pair<int, int> U(pair<int, int> current) {
	if (current.first - 1 < H && current.first - 1 >= 0) {
		if (map[current.first - 1][current.second] == '.') {
			map[current.first][current.second] = '.';
			current.first -= 1;
		}
	}

	map[current.first][current.second] = '^';

	return current;
}

pair<int, int> D(pair<int, int> current) {
	if (current.first + 1 < H && current.first + 1 >= 0) {
		if (map[current.first + 1][current.second] == '.') {
			map[current.first][current.second] = '.';
			current.first += 1;
		}
	}

	map[current.first][current.second] = 'v';

	return current;
}

pair<int, int> L(pair<int, int> current) {
	if (current.second - 1 < W && current.second - 1 >= 0) {
		if (map[current.first][current.second - 1] == '.') {
			map[current.first][current.second] = '.';
			current.second -= 1;
		}
	}

	map[current.first][current.second] = '<';

	return current;
}

pair<int, int> R(pair<int, int> current) {
	if (current.second + 1 < W && current.second + 1 >= 0) {
		if (map[current.first][current.second + 1] == '.') {
			map[current.first][current.second] = '.';
			current.second += 1;
		}
	}

	map[current.first][current.second] = '>';

	return current;
}

void U_S(pair<int, int> current) {
	if (current.first - 1 < 0 || current.first - 1 >= H ||
		map[current.first - 1][current.second] == '#') {
		return;
	}
	else if (map[current.first - 1][current.second] == '*') {
		map[current.first - 1][current.second] = '.';
		return;
	}
	else {
		current.first -= 1;
		U_S(current);
	}
}

void D_S(pair<int, int> current) {
	if (current.first + 1 < 0 || current.first + 1 >= H ||
		map[current.first + 1][current.second] == '#') {
		return;
	}
	else if (map[current.first + 1][current.second] == '*') {
		map[current.first + 1][current.second] = '.';
		return;
	}
	else {
		current.first += 1;
		D_S(current);
	}
}

void L_S(pair<int, int> current) {
	if (current.second - 1 < 0 || current.second - 1 >= W ||
		map[current.first][current.second - 1] == '#') {
		return;
	}
	else if (map[current.first][current.second - 1] == '*') {
		map[current.first][current.second - 1] = '.';
		return;
	}
	else {
		current.second -= 1;
		L_S(current);
	}
}

void R_S(pair<int, int> current) {
	if (current.second + 1 < 0 || current.second + 1 >= W ||
		map[current.first][current.second + 1] == '#') {
		return;
	}
	else if (map[current.first][current.second + 1] == '*') {
		map[current.first][current.second + 1] = '.';
		return;
	}
	else {
		current.second += 1;
		R_S(current);
	}
}

void S(pair<int, int> current) {
	if (map[current.first][current.second] == '^') {
		U_S(current);
	}
	else if (map[current.first][current.second] == 'v') {
		D_S(current);
	}
	else if (map[current.first][current.second] == '<') {
		L_S(current);
	}
	else if (map[current.first][current.second] == '>') {
		R_S(current);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int tc = 1; tc <= TC; tc++) {
		cin >> H >> W;

		pair<int, int> current;
		for (int i = 0; i < H; i++) {
			string input;
			cin >> input;
			for (int j = 0; j < W; j++) {
				map[i][j] = input[j];
				if (input[j] == '>' || input[j] == '<' || input[j] == '^' || input[j] == 'v') {
					current.first = i;
					current.second = j;
				}
			}
		}

		int N;
		cin >> N;

		string input;
		cin >> input;

		for (int i = 0; i < N; i++) {
			switch (input[i]) {
			case 'U':
				current = U(current);
				break;
			case 'D':
				current = D(current);
				break;
			case 'L':
				current = L(current);
				break;
			case 'R':
				current = R(current);
				break;
			case 'S':
				S(current);
				break;
			}
		}

		cout << "#" << tc << " ";
		print();
	}

	return 0;
}