#include<vector>
#include<iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<string> channel(n);

    for (int i = 0; i < n; i++) {
        cin >> channel[i];
    }

    int kbs1_idx = 0;
    int kbs2_idx = 0;
    for (int i = 0; i < n; i++) {
        if (channel[i] == "KBS1") kbs1_idx = i;
        if (channel[i] == "KBS2") kbs2_idx = i;
    }
    
    string method;

    // KBS1 채널 찾아서 첫번째로 올리기
    for (int i = 0; i < kbs1_idx; i++) method += "1";
    for (int i = 0; i < kbs1_idx; i++) method += "4";

    // KBS1 채널이 KBS2 채널보다 아래에 있는 경우
    if (kbs1_idx > kbs2_idx) kbs2_idx++;

    // KBS2 채널 찾아서 두번째로 올리기
    for (int i = 0; i < kbs2_idx; i++) method += "1";
    for (int i = 0; i < kbs2_idx - 1; i++) method += "4";

    cout << method;
    
}