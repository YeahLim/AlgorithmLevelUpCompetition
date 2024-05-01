// 코테 스터디 15회차
// SWEA D3
// 19113. 식료품 가게

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int t = 1; t <= TC; t++) {
		int N;
		cin >> N;

		vector<int> price;
		for (int i = 0; i < N * 2; i++) {
			int input;
			cin >> input;
			price.push_back(input);
		}

		vector<int> discount;
		for (int i = price.size() - 1; i >= 0; i--) {
			for (int j = price.size() - 2; j >= 0; j--) {
				if (price[j] == -1 || price[i] == -1) {
					continue;
				}

				if (price[i] * 0.75 == price[j]) {
					discount.push_back(price[i] * 0.75);
					price[j] = -1;
					break;
				}
				else if (price[i] * 0.75 > price[j]) {
					break;
				}
			}
		}

		cout << "#" << t << " ";
		for (int i = discount.size() - 1; i >= 0; i--) {
			cout << discount[i] << " ";
		}
		cout << '\n';
	}

	return 0;
}
