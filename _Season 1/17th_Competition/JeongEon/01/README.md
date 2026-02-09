# [SWEA D3️⃣] 2814. 최장 경로
 
## ⏰  **time**

4시간

## :pushpin: **Algorithm**

DFS

## ⏲️**Time Complexity**

$O(N^N)$

## :round_pushpin: **Logic**
1. 한 노드는 단 한 번만 탐색할 수 있다. ➡️ visited[11]
2. 노드 탐색을 더이상 할 수 없다면 다시 이전 노드로 돌아간다. ➡️ DFS 
```cpp
void DFS(vector<int> arr[11], bool visited[11], int y, int length) {
	if (result < length) {
		result = length;
	}

	for (int i = 0; i < arr[y].size(); i++) {
		if (!visited[arr[y][i]]) {
			visited[arr[y][i]] = true;
			DFS(arr, visited, arr[y][i], length + 1);
			visited[arr[y][i]] = false;
		}
	}
}
``` 

## :black_nib: **Review**
- 아.. 돌아가야 되는 거 생각 안하고 BFS로 풀다가 시간 낭비만 했다..
