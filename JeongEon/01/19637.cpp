#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std; 

int main() {
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0); 
    
	int a, b;
    cin >> a >> b; 
	
    vector <pair <int, string>> v(a);
	for (int i = 0; i < a; i++) {
        cin >> v[i].second >> v[i].first;     
    }
    
	for (int i = 0; i < b; i++) {
		int x;
        cin >> x; 
		
        int l = 0; 
		int h = v.size() - 1;
		int result = h; 
		while (l <= h) {
			int mid = (l + h) / 2; 
			if (v[mid].first >= x) {
				h = mid - 1; 
				result = mid; 
			}
			else { 
                l = mid + 1; 			
            }
		}
		cout << v[result].second << '\n'; 
	}
}
