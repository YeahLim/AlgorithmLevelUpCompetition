#include<iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        string S, T;
        cin >> S >> T;

        for(int i = 0; i < S.length(); i++){
            if(S[i] == 'x' || S[i] == 'X'){
                if(T[i] >= 97){
                    cout << (char)(T[i] - 32);
                    break;
                }
                cout << T[i];
            }
        }
    }

   return 0;
}
