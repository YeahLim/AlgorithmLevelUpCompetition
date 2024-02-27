# [백준] 설탕 배달 (2839번🩶5️⃣)

## ⏰  **time**

이틀

## :pushpin: **Algorithm**

수학
다이나믹 프로그래밍
그리디 알고리즘

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 최소개수를 확인하기 위해 5의 나머지를 계속 확인하는데 5로 나눠지면 바로 몫을 더해서 답을 구하고 5로 안나눠지면 3을 빼고 다시 확인
- -가 되면 -1 출력
```
while True:
    if n<0:
        ans=-1
        break

    if n%5 == 0:
        ans = ans + n//5
        break

    else:
        n -= 3
        ans+=1
```
  

## :black_nib: **Review**

- 처음에 안풀려서 tree로 갔다가 시간초과와 메모리 초과 떠서 던짐. 그러나 다시 풀게 됨. 
