#include <bits/stdc++.h>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    int n = p.size();
    
    for (int i = 0; i <= t.size() - n; i++) {
        
        string num = t.substr(i, n); // c++에서는 두번째 인자가 길이
        // cout << num << endl;
        
        if (stoll(num) <= stoll(p)) {
            answer++;
        }
    }
    
    return answer;
}
