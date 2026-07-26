#include <bits/stdc++.h>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    
    auto toSecond = [](string s) {
        int index = s.find(":");
        int min = stoi(s.substr(0, index));
        int sec = stoi(s.substr(index + 1));
        return min * 60 + sec;
    };
    
    int videoLen = toSecond(video_len);
    int curr = toSecond(pos);
    int opStart = toSecond(op_start);
    int opEnd = toSecond(op_end);
    
    if (curr >= opStart && curr < opEnd) {
        curr = opEnd;
    }
    
    for (string cmd : commands) {
        if (cmd == "prev") {
            curr -= 10;
            if (curr < 0) curr = 0;
        } else if (cmd == "next") {
            curr += 10;
            if (curr > videoLen) curr = videoLen;
        }

        // 오프닝 구간인 경우
        if (curr >= opStart && curr <= opEnd)
            curr = opEnd;
    }

    int min = curr / 60;
    int sec = curr % 60;

    string answer;

    if (min < 10) answer += "0";
    answer += to_string(min);

    answer += ":";

    if (sec < 10) answer += "0";
    answer += to_string(sec);
    
    return answer;
}