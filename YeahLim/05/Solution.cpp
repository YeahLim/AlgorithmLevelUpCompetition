#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> d, int budget) {
    
    sort(d.begin(), d.end());
    
    int answer = 0;
    
    for (int i = 0; i < d.size(); i++) {
        answer += d[i];
        
        if (answer == budget) {
            return i + 1;
        }
        else if (answer > budget) {
            return i;
        }
    }
    
    return d.size();
}