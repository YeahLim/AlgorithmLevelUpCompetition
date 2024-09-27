# [백준 - 실버 4] 수 찾기 (1920 번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

- 자료 구조 
- 정렬 
- 이분 탐색 
- 해시를 사용한 집합과 맵

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**

- 이 문제는 주어진 리스트 A에 여러 개의 수가 있는지 확인하는 문제입니다. 
- 즉, 리스트 A에 있는 값을 빠르게 탐색해서, 리스트 B에 주어진 수가 A에 존재하는지 여부를 판단하는 문제입니다.
- 입력받은 A를 미리 정렬한 후 이진탐색을 하여 O(NlogN)의 시간복잡도로 값을 찾을 수 있었습니다.

- 첫 번째 줄에서 N을 입력받고, 그 다음 줄에서 N개의 정수를 입력받아 set으로 변환하여 A에 저장합니다.
- set()을 사용하는 이유는 내부적으로 해시를 사용하여 탐색 시간이 O(1)이 걸린다고 합니다.
- M개의 쿼리를 입력받고, 각 쿼리에 대해 A에 존재하는지 여부를 확인합니다.
- if i in A: 구문을 사용하여 쿼리 값이 A에 있는지 확인하고, 있으면 1을, 없으면 0을 출력합니다.

## :black_nib: **Review**

- 처음엔 list를 사용하여 A를 저장하였고, if문을 사용하여 리스트에서 값을 찾았습니다.
- 하지만 이럴 경우 리스트에서 값을 찾을 때마다 O(N) 시간이 소요되므로, M개의 쿼리에 대해 O(N * M) 시간이 걸립니다. 
- 문제에서 N과 M이 최대 100,000까지 주어질 수 있기 때문에 시간초과 문제가 발생했습니다.

### 파이썬의 set 자료구조

- 위 시간초과 문제를 해결하기 위해 Python의 set 자료구조는 해시를 이용하여 탐색이 가능하므로, O(1) 시간에 탐색이 가능합니다. 
- 따라서 A를 set으로 변환한 후, 각 쿼리에 대해 O(1) 시간에 존재 여부를 확인할 수 있었습니다.