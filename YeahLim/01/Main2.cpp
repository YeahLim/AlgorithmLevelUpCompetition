#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    
    string str;
    cin >> str;

    vector<int> cnt(26);
    for (char& c : str) {

        // 소문자인 경우
        if (c >= 'a') {
            cnt[c - 'a']++;
        }
        // 대문자인 경우
        else {
            cnt[c - 'A']++;
        }
    }

    // 많이 쓰인 값 구하기
    auto max_addr = max_element(cnt.begin(), cnt.end());
    int max_cnt = *max_addr;
    int how_many = count(cnt.begin(), cnt.end(), max_cnt);

    cout << (how_many > 1 ? '?' : char(max_addr - cnt.begin() + 'A'));

}