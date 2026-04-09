#include <bits/stdc++.h>

using namespace std;

string solution(vector<int> food) {
    
    map<int, int> count;
    
    string first;
    
    for (int i = 0; i < food.size(); i++) {
        if (food[i] % 2 == 1) {
            food[i] -= 1;
        }
        first += string(food[i]/2, i + '0');
    }
    
    string second = first;
    reverse(second.begin(), second.end());

    
    return first + '0' + second;
}