// 13회 알고리즘 스터디
// SWEA D3
// 4406. 모음이 보이지 않는 사람

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        string input;
        cin >> input;

        string result = "";
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') {
                continue;
            }
            result += input[i];
        }


        cout << "#" << t << " ";
        cout << result << '\n';
    }

    return 0;
}