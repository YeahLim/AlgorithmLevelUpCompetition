#include <bits/stdc++.h>

using namespace std;

struct Time {
    int startHour, startMin, endHour, endMin;
    
    Time (int startHour, int startMin, int endHour, int endMin) 
        : startHour(startHour), startMin(startMin), endHour(endHour), endMin(endMin) {}
};

int solution(vector<vector<string>> book_time) {
    
    vector<Time> timeList;
    
    for (vector<string>& time : book_time) {
        int colon = 2;
        int startHour = stoi(time[0].substr(0, colon));
        int startMin = stoi(time[0].substr(colon + 1));
        int endHour = stoi(time[1].substr(0, colon));
        int endMin = stoi(time[1].substr(colon + 1)) + 10;
        
        if (endMin >= 60) {
            endMin %= 60;
            endHour++;
        }
        
        timeList.push_back(Time(startHour, startMin, endHour, endMin));
    }
    
    // 입실 시간 순으로 정렬
    sort(timeList.begin(), timeList.end(), [](Time& a, Time& b) {
        if (a.startHour == b.startHour) {
            return a.startMin < b.startMin;
        }
        return a.startHour < b.startHour;
    });
    
    // 퇴실 시간 순으로 정렬
    auto cmp = [](Time& a, Time& b) {
        if (a.endHour == b.endHour) {
            return a.endMin > b.endMin;
        }
        return a.endHour > b.endHour;
    };
    
    priority_queue<Time, vector<Time>, decltype(cmp)> pq(cmp);
    pq.push(timeList[0]); // 첫번째 손님 입실
    
    for (int i = 1; i < timeList.size(); i++) {
        
        int startHour = timeList[i].startHour;
        int startMin = timeList[i].startMin;
        
        int endHour = pq.top().endHour;
        int endMin = pq.top().endMin;
       
        // 방 새로 안파도 되는 경우
        if (startHour > endHour || (startHour == endHour && startMin >= endMin)) {
            pq.pop();
        }
        pq.push(timeList[i]);
    }
    
    return pq.size();
}