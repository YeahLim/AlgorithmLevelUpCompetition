// 알고리즘 스터디 21회차
// 백준 실버 4
// 1302 베스트셀러

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> i, pair<int, string> j) {
	if (i.first == j.first) {
		return i.second < j.second;
	}

	return i.first > j.first;
}

int main() {
	int N;
	cin >> N;

	vector<pair<int, string>> book;
	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;

		if (!book.empty()) {
			bool find = false;
			for (int i = 0; i < book.size(); i++) {
				if (book[i].second == input) {
					book[i].first++;
					find = true;
					break;
				}
			}

			if (find) {
				continue;
			}
		}

		book.push_back({ 0, input });
	}

	sort(book.begin(), book.end(), compare);

	cout << book[0].second << '\n';

	return 0;
}