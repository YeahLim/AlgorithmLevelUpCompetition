# [백준 - 실버 2] 16953. A → B

## ⏰  **time**
30분

## :pushpin: **Algorithm**
BFS

## ⏲️**Time Complexity**
$O(Nlog(N))$

## :round_pushpin: **Logic**
1. 2를 곱해도 b보다 작으면 횟수를 더한 상태로 q에 넣는다.
2. 수에 가장 오른쪽에 더하기 위해 10을 곱하고 1을 더해서 q에 넣는다.
3. B가 되면 return 한다.
```cpp
  int bfs(long long a, long long b){
      queue <pair <long long, long long> > q;
      q.push(pair <long long,long long>(a, 1));
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
```

## :black_nib: **Review**
- BFS

## 📡 Link
https://www.acmicpc.net/problem/16953
