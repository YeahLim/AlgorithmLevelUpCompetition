#include<iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        int vote;
        cin >> vote;

        int tmp = vote/5;
        for(int j = 0; j < tmp; j++){
            cout << "++++ ";
        }

        tmp = vote%5;
        for(int j = 0; j < tmp; j++){
            cout << "|";
        }
        cout << endl;
    }
    
   return 0;
}
