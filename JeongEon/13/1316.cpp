// 백준 1316번 <그룹 단어 체커>
// 알고리즘 : 문자열, 구현
#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	int N;
	cin >> N;

	char** word = new char* [N];
	for (int i = 0; i < N; i++) {
		word[i] = new char[101];
		cin >> word[i];
	}

	stack<char> twin_stack;
	stack<char> origin_stack;
	bool NotGroup = false;
	int word_cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 101; j++) {
			if (word[i][j] == NULL) {
				word_cnt++;
				break;
			}
			if (!NotGroup) {
				int pop_cnt = 0;
				while (!twin_stack.empty()) {
					if (twin_stack.top() != word[i][j]) {
						twin_stack.pop();
						pop_cnt++;
					}
					else {
						if (twin_stack.top() == word[i][j] && pop_cnt != 0 && word[i][j] != word[i][j - 1]) {
							NotGroup = true;
							int size = twin_stack.size();
							for (int k = 0; k < size; k++) {
								twin_stack.pop();
							}
						}
						else {
							twin_stack.pop();
							pop_cnt++;
						}
					}
				}
			}

			if (NotGroup == true) {
				break;
			}
			origin_stack.push(word[i][j]);
			twin_stack = origin_stack;
		}
		NotGroup = false;
		int size = origin_stack.size();
		for (int k = 0; k < size; k++) {
			origin_stack.pop();
		}
		size = twin_stack.size();
		for (int k = 0; k < size; k++) {
			twin_stack.pop();
		}
	}

	cout << word_cnt << endl;

	return 0;
}

