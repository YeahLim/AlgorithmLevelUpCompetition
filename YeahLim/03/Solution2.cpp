#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
     
    int height = 0;
    int width = 0;
    
    for (vector<int>& size : sizes) {
        
        height = max(height, max(size[0], size[1]));
        width = max(width, min(size[0], size[1]));
    }
    
    return height * width;
}