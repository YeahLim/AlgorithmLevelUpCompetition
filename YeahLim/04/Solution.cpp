#include <bits/stdc++.h>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    for (char c : s) {
        if (c < '0' || c > '9') {
            answer = false;
            break;
        }
    }
    
    return answer && (s.size() == 4 || s.size() == 6);
}