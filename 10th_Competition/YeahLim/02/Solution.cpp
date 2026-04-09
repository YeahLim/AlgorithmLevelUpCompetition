#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int yCount = 0;
    int pCount = 0;
    
    // for (auto c : s) {
    for (char c : s) {
        if (c == 'p' || c == 'P') {
            pCount++;
        }
        else if (c == 'y' || c == 'Y') {
            yCount++;
        }
    }
        
    return pCount == yCount;
}