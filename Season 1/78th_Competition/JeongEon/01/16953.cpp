#include<iostream>
#include<queue>

using namespace std;

int bfs(long long a, long long b){
    queue <pair <long long, long long> > q;
    q.push(pair<long long, long long>(a, 1));
    while(!q.empty()){
        pair <long long,long long> now = q.front();
        q.pop();
        if(now.first == b){
            return now.second;
        }
        if(now.first*2 <= b){
            q.push(pair<long long, long long>(now.first*2, now.second+1));
        }
        if(now.first*10+1 <= b){
            q.push(pair<long long, long long>(now.first*10+1, now.second+1));
        }
    }
    return -1;
}

int main(){
    long long a,b;

    cin >> a >> b;
    cout << bfs(a,b);
}
