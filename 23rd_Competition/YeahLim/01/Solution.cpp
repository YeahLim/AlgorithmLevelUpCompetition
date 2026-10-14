#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int solution(vector<vector<int>> signals) {
    
    vector<int> time(signals.size(), 0);
    int lcm = 1;
    
    // 최소 공배수 구하기
    for (int i = 0; i < signals.size(); i++) {
        time[i] = signals[i][0] + signals[i][1] + signals[i][2];
        lcm = lcm * time[i] / gcd(lcm, time[i]);
    }
    
    // 동시에 첫 노란불일 때 구하기
    for (int t = 0; t <= lcm; t++) {
        
        bool all = true;
        
        for (int i = 0; i < signals.size(); i++) {
            int pos = (t-1) % time[i];
            int green = signals[i][0];
            int yellow = signals[i][1];
            if (pos < green || pos >= green + yellow) {
                all = false;
                break;
            }
        }
        
        if (all) {
            return t;
        }
    }
    
    
    return -1;
}
