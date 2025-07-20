#include<vector>
#include<iostream>
using namespace std;

int main() {
    
    string str;
    cin >> str;

    vector<int> count(26);
    for (char& c : str) {

        // 소문자인 경우
        if (c >= 'a') {
            count[c - 'a']++;
        }
        // 대문자인 경우
        else {
            count[c - 'A']++;
        }
    }

    // 많이 쓰인 값 구하기
    int max_cnt = -1;
    int max_char = -1;
    bool flag = false;
    for (int i = 0; i < count.size(); i++) {
        if (max_cnt < count[i]) {
            max_cnt = count[i];
            max_char = i;
            flag = false;
        }
        else if (max_cnt == count[i]) {
            flag = true;
        }
    }

    cout << (flag ? '?' : char(max_char + 'A'));

}