#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    long long int K, P, N;
    cin >> K >> P >> N;

    long long int result = K;
    for(int i = 0; i < N; i++){
        result *= (P%1000000007);
        result %= 1000000007;
    }
    
    result %= 1000000007;
    cout << result;

   return 0;
}
