# [백준 - 골드 4] 1197. 최소 스패닝 트리

## ⏰  **time**

20분

## \:pushpin: **Algorithm**

크루스칼(Kruskal) + 유니온 파인드(Disjoint Set)

## ⏲️**Time Complexity**

\$O(E \log E)\$

* 간선 정렬: $O(E \log E)$
* 합치기/찾기: 거의 $O(1)$ (경로 압축)

## \:round\_pushpin: **Logic**

1. **간선 입력**: `(cost, from, to)` 형태로 벡터에 저장.
2. **정렬**: 비용이 낮은 간선부터 오름차순 정렬.
3. **유니온 파인드 초기화**: `parent[i] = i`.
4. **간선 채택**: 정렬된 간선을 순회하며, 두 정점의 루트가 다르면 **채택**하고 `union` 수행, `result += cost`.
5. **완료**: 모든 정점이 연결될 때까지 진행하면 누적합 `result`가 MST 가중치 합.

```cpp
int find(int x){ return parent[x]==x ? x : parent[x]=find(parent[x]); }
void uni(int x,int y){ x=find(x); y=find(y); parent[y]=x; }
bool sameparent(int x,int y){ return find(x)==find(y); }

// 1) 간선 입력
vector<pair<int,pair<int,int>>> edges; // {cost, {u,v}}
// 2) 정렬
sort(edges.begin(), edges.end());
// 3) 초기화
for(int i=1;i<=V;i++) parent[i]=i;
// 4) 간선 선택
int result=0;
for(auto &e: edges){
    int c=e.first, u=e.second.first, v=e.second.second;
    if(!sameparent(u,v)){ uni(u,v); result+=c; }
}
cout<<result;
```

## \:black\_nib: **Review**

* 크루스칼은 구현이 간단하고, 간선 수가 많은 그래프에서 효과적.
* `find`에 **경로 압축**을 꼭 넣어야 시간 초과를 피할 수 있음.
* 간선 입력을 `(cost, {u,v})`로 두면 정렬·순회가 깔끔해짐.

## 📡 Link

[https://www.acmicpc.net/problem/1197](https://www.acmicpc.net/problem/1197)
