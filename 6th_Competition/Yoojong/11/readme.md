# [백준] 수 정렬하기3 (10989번🩶5️⃣)

## ⏰  **time**
20분

## :pushpin: **Algorithm**

정렬

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 값을 index로 생각하여 list에 개수만큼 입력
```
N = int(sys.stdin.readline())
num_list = [0] * 10001

for _ in range(N):
    n = int(sys.stdin.readline())
    num_list[n] +=1

for i in range(10001):
    if num_list[i] != 0:
        for j in range(num_list[i]):
            print(i)
```
  

## :black_nib: **Review**

- 두 번째 for문에서 출력할 때 in enumerate() 함수를 사용했는데 메모리 초과가 나올 줄은 상상도 못했다.
