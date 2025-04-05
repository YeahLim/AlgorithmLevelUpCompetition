#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    
    unordered_map<string, int> map;
    
    for (auto part : participant) {
        
        if (map.find(part) == map.end()) {
            map.insert(make_pair(part, 1));  
        }
        else {
            map[part]++;
        }
    }
    
    for (auto com : completion) {
        map[com]--;
    }

    string answer = "";
    for (auto part : participant) {
        if (map[part] > 0) {
            answer = part;
        }
    }

    return answer;
}