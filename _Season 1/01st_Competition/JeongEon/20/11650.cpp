// 백준 11650번 <좌표 정렬하기>
// 알고리즘 : 정렬
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int N;
	cin >> N;

	int x, y;
	vector<pair <int, int>> v;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back({ x,y });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << '\n';
	}

	/*
	<원래 내 코드>
	int** arr = new int* [N];
	for (int i = 0; i < N; i++) {
		arr[i] = new int[2];
		cin >> arr[i][0];
		cin >> arr[i][1];
	}

	int temp_x;	int temp_y;
	for (int i = 0; i < N; i++) {
		int check = i;
		for (int j = i; j < N; j++) {
			if (arr[check][0] == arr[j][0]) {
				if (arr[check][1] > arr[j][1]) {
					check = j;
				}
			}
			else if (arr[check][0] > arr[j][0]) {
				check = j;
			}
		}
		temp_x = arr[i][0];	temp_y = arr[i][1];
		arr[i][0] = arr[check][0];	arr[i][1] = arr[check][1];
		arr[check][0] = temp_x;	arr[check][1] = temp_y;
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i][0] << " " << arr[i][1] << '\n';
	}
	*/

	return 0;
}