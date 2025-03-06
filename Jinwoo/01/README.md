# [백준 - 실버 4] 수 찾기 (1920 번)

## ⏰  **time**

30 분

## :pushpin: **Algorithm**

- 자료 구조
- 정렬
- 이분 탐색
- 해시를 사용한 집합과 맵

## ⏲️**Time Complexity**

$O(logN)$

## :round_pushpin: **Logic**

- 이전에 풀이했던 문제이지만 이분탐색 복습을 위해 다시 풀이.

### 이분 탐색

- 오름차순으로 정렬된 배열을 반복적으로 나누어 target이 선택될 때까지 탐색하는 알고리즘

```commandline
def binary_search(target, data):
    data.sort()
    start = 0 			# 맨 처음 위치
    end = len(data) - 1 	# 맨 마지막 위치

    while start <= end:
        mid = (start + end) // 2 # 중간값

        if data[mid] == target:
            return mid 		# target 위치 반환

        elif data[mid] > target: # target이 작으면 왼쪽을 더 탐색
            end = mid - 1
        else:                    # target이 크면 오른쪽을 더 탐색
            start = mid + 1
    return
```
- 기본적으로 다음과 같이 함수가 구성이 된다.
- 이분 탐색을 진행하려면 탐색할 리스트가 오름차순으로 정렬되어 있어야 한다.
- 리스트의 시작 부분과 끝 부분을 지정하고 (시작 + 끝)//2 를 해주어 중간값을 지정한다.
- 리스트의 중간 값을 현재 비교값과 비교하며 
- 중간값보다 현재값이 작을 경우 리스트의 왼쪽을 비교 `end = mid - 1`
- 중간값보다 현재값이 클 경우 리스트의 오른쪽을 비교 `start = mid + 1`
- 시작값과 끝값이 같아질 때까지 반복을 해준다.

## :black_nib: **Review**

### 시간 초과(2중 반복문)

```commandline
import sys
input = sys.stdin.readline

N = int(input())
N_list = list(map(int, input().split()))
#print(M_list)

M = int(input())
check_list = list(map(int, input().split()))

for i in check_list:
    #print(i, "이 있는가?")

    for j in range(len(N_list)):
        if N_list[j] == i:
            print(1)
            break

        else:
            if j == len(N_list)-1:
                print(0)
```
- 처음에 2중 반복문을 사용하여 풀이를 하여 시간 초과 오류가 발생했다.